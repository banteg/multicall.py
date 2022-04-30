import asyncio
import logging
from time import sleep, time
from typing import Any, Dict, List, Optional, Tuple, Union

import aiohttp
import requests
from web3 import Web3

from multicall import Call
from multicall.asyncio import async_loop
from multicall.constants import (GAS_LIMIT, MULTICALL2_ADDRESSES,
                                 MULTICALL2_BYTECODE, MULTICALL_ADDRESSES, w3)
from multicall.utils import chain_id, state_override_supported

logger = logging.getLogger(__name__)

CallResponse = Tuple[bool,Any]

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
            multicall_map = MULTICALL_ADDRESSES if self.chainid in MULTICALL_ADDRESSES else MULTICALL2_ADDRESSES
            self.multicall_sig = 'aggregate((address,bytes)[])(uint256,bytes[])'
        else:
            multicall_map = MULTICALL2_ADDRESSES
            self.multicall_sig = 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])'
        self.multicall_address = multicall_map[self.chainid]

    def __call__(self) -> Dict[str,Any]:
        start = time()
        if self.w3.eth.is_async:
            return self.async_call()
        task = asyncio.run_coroutine_threadsafe(self.async_call(), async_loop)
        while not task.done():
            if e := task.exception(300): 
                raise e
            sleep(.1)
        print(time() - start, 's')
        return task.result()

    async def async_call(self) -> Dict[str,Any]:
        outputs: List[CallResponse] = [
            output 
            for batch in await asyncio.gather(*[
                self.fetch_outputs(batch, tempvar=i) 
                for i,batch in enumerate(batcher.batch_calls(self.calls))
            ])
            for output in batch
        ]

        return {
            name: result
            for call, (success, output) in zip(self.calls, outputs)
            for name, result in call.decode_output(output, success).items()
        }

    async def fetch_outputs(self, calls: List[Call], ConnErr_retries: int = 0, tempvar = 0) -> List[CallResponse]:
        
        print(f"I am coroutine {tempvar} started")
        if calls is None:
            calls = self.calls
        
        if state_override_supported(self.w3):
            aggregate = Call(
                self.multicall_address,
                self.multicall_sig,
                returns=None,
                _w3=self.w3,
                block_id=self.block_id,
                gas_limit=self.gas_limit,
                state_override_code=MULTICALL2_BYTECODE
            )
        
        else:
            # If state override is not supported, we simply skip it.
            # This will mean you're unable to access full historical data on chains without state override support.
            aggregate = Call(
                self.multicall_address,
                self.multicall_sig,
                returns=None,
                _w3=self.w3,
                block_id=self.block_id,
                gas_limit=self.gas_limit,
            )

        try:
            args = self.get_args(calls)
            if self.require_success is True:
                _, outputs = await aggregate.call(args)
                outputs = ((None, output) for output in outputs)
            else:
                _, _, outputs = aggregate(args)
            print(f"I am coroutine {tempvar} finished")
            return outputs
        except aiohttp.ClientResponseError as e:
            strings = ['request entity too large','connection reset by peer']
            if not any([string in str(e).lower() for string in strings]):
                raise
            logger.warning(e)
        except requests.ConnectionError as e:
            if "('Connection aborted.', ConnectionResetError(104, 'Connection reset by peer'))" not in str(e) or ConnErr_retries > 5:
                raise
            logger.warning(e)
        except requests.HTTPError as e:
            strings = 'request entity too large','payload too large','time-out','520 server error'
            if not any([string in str(e).lower() for string in strings]):
                raise
            logger.warning(e)
        except ValueError as e:
            if 'out of gas' not in str(e).lower():
                raise
            if len(calls) == 1:
                raise
            logger.warning(e)
        
        print(f"I am coroutine {tempvar} finished")
        
        return [
            result
            for batch in 
            await asyncio.gather(*[
                self.fetch_outputs(chunk,ConnErr_retries=ConnErr_retries+1)
                for chunk in batcher.split_calls(calls)
            ])
            for result in batch 
        ]

    def get_args(self, calls: List[Call]) -> List[Union[bool,List[List[Any]]]]:
        if self.require_success is True:
            return [[[call.target, call.data] for call in calls]]
        return [self.require_success, [[call.target, call.data] for call in calls]]


class NotSoBrightBatcher:
    """
    This class helps with processing a large volume of large multicalls.
    It's not so bright, but should quickly bring the batch size down to something reasonable for your node.
    """
    def __init__(self) -> None:
        self.step = 10000
    
    def batch_calls(self, calls: List[Call]) -> List[List[Call]]:
        '''
        Batch calls into chunks of size `self.step`.
        '''
        batches = []
        start = 0
        done = len(calls) - 1
        while True:
            end = start + self.step
            batches.append(calls[start:end])
            if end >= done:
                return batches
            start = end
        
    def split_calls(self, calls: List[Call]) -> Tuple[List[Call],List[Call]]:
        '''
        Split calls into 2 batches in case request is too large, and reduce `self.step`.
        We do this to help us find optimal `self.step` value.
        '''
        
        if self.step >= len(calls):
            logger.warning(f'Multicall batch size reduced from {self.step} to {len(calls) - 1}. The failed batch had {len(calls)} calls.')
            self.step = len(calls) - 1
        
        center = len(calls) // 2
        chunk_1 = calls[:center]
        chunk_2 = calls[center:]
        return chunk_1, chunk_2

batcher = NotSoBrightBatcher()
