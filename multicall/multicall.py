import asyncio
from time import sleep, time
from typing import Any, Dict, List, Optional, Tuple, Union

import aiohttp
import requests
from web3 import Web3

from multicall import Call
from multicall.asyncio import async_loop, process_pool_executor
from multicall.constants import (GAS_LIMIT, MULTICALL2_ADDRESSES,
                                 MULTICALL2_BYTECODE, MULTICALL_ADDRESSES, w3)
from multicall.loggers import setup_logger
from multicall.utils import chain_id, state_override_supported

logger = setup_logger(__name__)

CallResponse = Tuple[bool,Any]


def get_args(calls: List[Call], require_success: bool = True) -> List[Union[bool,List[List[Any]]]]:
    if require_success is True:
        return [[[call.target, call.data] for call in calls]]
    return [require_success, [[call.target, call.data] for call in calls]]


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
        logger.debug(f"Multicall took {time() - start}s")
        return task.result()

    async def async_call(self) -> Dict[str,Any]:
        batches = await asyncio.gather(*[
            self.fetch_outputs(batch, tempvar=str(i)) 
            for i,batch in enumerate(batcher.batch_calls(self.calls,batcher.step))
        ])

        # TODO this appears to be blocking, refactor it out later so async clients can use
        #outputs = [output for batch in batches for output in batch]
        outputs = await async_loop.run_in_executor(
            process_pool_executor,
            unpack_batch_results,
            batches
        )

        return {
            name: result
            for output in outputs
            for name, result in output.items()
        }

    async def fetch_outputs(self, calls: List[Call], ConnErr_retries: int = 0, tempvar = '') -> List[CallResponse]:
        
        logger.debug(f"I am coroutine {tempvar} started")

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
            args = await async_loop.run_in_executor(
                process_pool_executor,
                get_args,
                calls,
                self.require_success
            ) # await async_loop.run_in_executor(process_pool_executor, get_args, calls) # self.get_args(calls) #
            if self.require_success is True:
                _, outputs = await aggregate.async_call(args)
                outputs = ((None, output) for output in outputs)
            else:
                _, _, outputs = await aggregate.async_call(args)

            outputs = await asyncio.gather(*[
                async_loop.run_in_executor(process_pool_executor, Call.decode_output, output, call.signature, call.returns, success)
                for call, (success, output) in zip(calls, outputs)
            ])

            logger.debug(f"I am coroutine {tempvar} finished")
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
        
        # Failed, we need to rebatch the calls,
        # Sometimes a separate coroutine will lower batcher.step before we get here. 
        # If so, we can use its value rather than splitting in half.
        if batcher.step <= len(calls) // 2:
            batch_func = batcher.batch_calls
        else:
            batch_func = batcher.split_calls
            if batcher.step >= len(calls):
                new_step = round(len(calls) * 0.99) if len(calls) >= 100 else len(calls) - 1
                logger.warning(f'Multicall batch size reduced from {batcher.step} to {new_step}. The failed batch had {len(calls)} calls.')
                batcher.step = new_step

        batches = await async_loop.run_in_executor(
            process_pool_executor,
            batch_func,
            calls,
            batcher.step
        )
        
        batch_results = await asyncio.gather(*[
                self.fetch_outputs(
                    chunk,
                    ConnErr_retries+1,
                    f"{tempvar}_{i}",
                )
                for i, chunk in enumerate(batches)
            ])
            
        return_val = await async_loop.run_in_executor(process_pool_executor,unpack_batch_results,batch_results)
    
        logger.debug(f"I am coroutine {tempvar} finished")
        return return_val

def unpack_batch_results(batch_results: List[List[CallResponse]]) -> List[CallResponse]:
    return [result for batch in batch_results for result in batch]


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
        '''
        Split calls into 2 batches in case request is too large. We do this to help us find optimal `self.step` value.
        '''
        
        center = len(calls) // 2
        chunk_1 = calls[:center]
        chunk_2 = calls[center:]
        return chunk_1, chunk_2

batcher = NotSoBrightBatcher()
