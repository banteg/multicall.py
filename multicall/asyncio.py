import asyncio
from concurrent.futures import ProcessPoolExecutor
from typing import Any, Coroutine, Dict, Iterable

from web3 import AsyncHTTPProvider, Web3
from web3.eth import AsyncEth

async_w3s: Dict[Web3,Web3] = {}
async_loop = asyncio.get_event_loop()
process_pool_executor = ProcessPoolExecutor(16)

def get_async_w3(w3: Web3) -> Web3:
    if w3 in async_w3s:
        return async_w3s[w3]
    async_w3 = Web3(
        provider=AsyncHTTPProvider(w3.provider.endpoint_uri),
        middlewares=[],
    )
    async_w3.eth = AsyncEth(async_w3)
    async_w3s[w3] = async_w3
    return async_w3

def raise_if_exception(obj: Any):
    if isinstance(obj, Exception):
        raise obj

def raise_if_exception_in(iterable: Iterable[Any]):
    for obj in iterable:
        raise_if_exception(obj)

async def gather(coroutines: Iterable[Coroutine]):
    results = await asyncio.gather(*coroutines, return_exceptions=True)
    raise_if_exception_in(results)
    return results

async def run_in_subprocess(coro: Coroutine, *args: Any, **kwargs) -> Any:
    return await async_loop.run_in_executor(process_pool_executor, coro, *args, **kwargs)
