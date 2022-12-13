import asyncio
from time import time
from typing import Any, Dict, List, Optional, Tuple, Union

import aiohttp
import requests
from web3 import Web3

from multicall import Call
from multicall.constants import (GAS_LIMIT, MULTICALL2_ADDRESSES, MULTICALL2_BYTECODE,
                                 MULTICALL3_BYTECODE, MULTICALL3_ADDRESSES, w3)
from multicall.loggers import setup_logger
from multicall.utils import (await_awaitable, chain_id, gather,
                             run_in_subprocess, state_override_supported)

logger = setup_logger(__name__)

CallResponse = Tuple[Union[None,bool],bytes]

def get_args(calls: List[Call], require_success: bool = True) -> List[Union[bool,List[List[Any]]]]:
    if require_success is True:
        return [[[call.target, call.data] for call in calls]]
    return [require_success, [[call.target, call.data] for call in calls]]

def unpack_aggregate_outputs(outputs: Any) -> Tuple[CallResponse,...]:
    return tuple((None, output) for output in outputs)

def unpack_batch_results(batch_results: List[List[CallResponse]]) -> List[CallResponse]:
    return [result for batch in batch_results for result in batch]


class Multicall:
    def __init__(
        self, 
        calls: List[Call],
        block_id: Optional[int] = None, 
        require_success: bool = True,
        gas_limit: int = GAS_LIMIT,
        _w3: Web3 = w3
    ) -> None:
        self.calls = calls
        self.block_id = block_id
        self.require_success = require_success
        self.gas_limit = gas_limit
        self.w3 = _w3
        self.chainid = chain_id(self.w3)
        if require_success is True:
            multicall_map = MULTICALL3_ADDRESSES if self.chainid in MULTICALL3_ADDRESSES else MULTICALL2_ADDRESSES
            self.multicall_sig = 'aggregate((address,bytes)[])(uint256,bytes[])'
        else:
            multicall_map = MULTICALL3_ADDRESSES if self.chainid in MULTICALL3_ADDRESSES else MULTICALL2_ADDRESSES
            self.multicall_sig = 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])'
        self.multicall_address = multicall_map[self.chainid]

    def __call__(self) -> Dict[str,Any]:
        start = time()
        response = await_awaitable(self.coroutine())
        logger.debug(f"Multicall took {time() - start}s")
        return response

    async def coroutine(self) -> Dict[str,Any]:
        batches = await gather([
            self.fetch_outputs(batch, id=str(i)) 
            for i,batch in enumerate(batcher.batch_calls(self.calls,batcher.step))
        ])
        outputs = await run_in_subprocess(unpack_batch_results, batches)

        return {
            name: result
            for output in outputs
            for name, result in output.items()
        }

    async def fetch_outputs(self, calls: List[Call], ConnErr_retries: int = 0, id: str = '') -> List[CallResponse]:
        logger.debug(f"coroutine {id} started")

        if calls is None:
            calls = self.calls
        
        try:
            args = await run_in_subprocess(get_args, calls, self.require_success)
            if self.require_success is True:
                _, outputs = await self.aggregate.coroutine(args)
                outputs = await run_in_subprocess(unpack_aggregate_outputs, outputs)
            else:
                _, _, outputs = await self.aggregate.coroutine(args)
            outputs = await gather([
                run_in_subprocess(Call.decode_output, output, call.signature, call.returns, success)
                for call, (success, output) in zip(calls, outputs)
            ])
            logger.debug(f"coroutine {id} finished")
            return outputs
        except Exception as e:
            _raise_or_proceed(e, len(calls), ConnErr_retries=ConnErr_retries)
        
        # Failed, we need to rebatch the calls and try again.
        batch_results = await gather([
            self.fetch_outputs(chunk, ConnErr_retries+1, f"{id}_{i}")
            for i, chunk in enumerate(await batcher.rebatch(calls))
        ])
            
        return_val = await run_in_subprocess(unpack_batch_results,batch_results)
        logger.debug(f"coroutine {id} finished")
        return return_val

    @property
    def aggregate(self) -> Call:
        if state_override_supported(self.w3):
            return Call(
                self.multicall_address,
                self.multicall_sig,
                returns=None,
                _w3=self.w3,
                block_id=self.block_id,
                gas_limit=self.gas_limit,
                state_override_code=MULTICALL3_BYTECODE
            )
        
        # If state override is not supported, we simply skip it.
        # This will mean you're unable to access full historical data on chains without state override support.
        return Call(
            self.multicall_address,
            self.multicall_sig,
            returns=None,
            _w3=self.w3,
            block_id=self.block_id,
            gas_limit=self.gas_limit,
        )


class NotSoBrightBatcher:
    """
    This class helps with processing a large volume of large multicalls.
    It's not so bright, but should quickly bring the batch size down to something reasonable for your node.
    """
    def __init__(self) -> None:
        self.step = 10000
    
    def batch_calls(self, calls: List[Call], step: int) -> List[List[Call]]:
        '''
        Batch calls into chunks of size `self.step`.
        '''
        batches = []
        start = 0
        done = len(calls) - 1
        while True:
            end = start + step
            batches.append(calls[start:end])
            if end >= done:
                return batches
            start = end
        
    def split_calls(self, calls: List[Call], unused: None = None) -> Tuple[List[Call],List[Call]]:
        """
        Split calls into 2 batches in case request is too large.
        We do this to help us find optimal `self.step` value.
        """
        center = len(calls) // 2
        chunk_1 = calls[:center]
        chunk_2 = calls[center:]
        return chunk_1, chunk_2
    
    async def rebatch(self, calls):
        # If a separate coroutine changed `step` after calls were last batched, we will use the new `step` for rebatching.
        if self.step <= len(calls) // 2:
            return await run_in_subprocess(self.batch_calls, calls, self.step)
        
        # Otherwise we will split calls in half.
        if self.step >= len(calls):
            new_step = round(len(calls) * 0.99) if len(calls) >= 100 else len(calls) - 1
            logger.warning(f'Multicall batch size reduced from {self.step} to {new_step}. The failed batch had {len(calls)} calls.')
            self.step = new_step
        return await run_in_subprocess(self.split_calls, calls, self.step)


batcher = NotSoBrightBatcher()


def _raise_or_proceed(e: Exception, ct_calls: int, ConnErr_retries: int) -> None:
    """ Depending on the exception, either raises or ignores and allows `batcher` to rebatch. """
    if isinstance(e, aiohttp.ClientOSError):
        if 'broken pipe' not in str(e).lower():
            raise e
        logger.warning(e)
    elif isinstance(e, aiohttp.ClientResponseError):
        strings = ['request entity too large','connection reset by peer']
        if not any([string in str(e).lower() for string in strings]):
            raise e
        logger.warning(e)
    elif isinstance(e, requests.ConnectionError):
        if "('Connection aborted.', ConnectionResetError(104, 'Connection reset by peer'))" not in str(e) or ConnErr_retries > 5:
            raise e
    elif isinstance(e, requests.HTTPError):
        strings = 'request entity too large','payload too large','time-out','520 server error'
        if not any([string in str(e).lower() for string in strings]):
            raise e
        logger.warning(e)
    elif isinstance(e, asyncio.TimeoutError):
        pass
    elif isinstance(e, ValueError):
        if 'out of gas' not in str(e).lower():
            raise e
        if ct_calls == 1:
            raise e
        logger.warning(e)
    else:
        raise e
