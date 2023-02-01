
import asyncio
from concurrent.futures import ProcessPoolExecutor
from typing import Any, Awaitable, Callable, Coroutine, Dict, Iterable

import eth_retry
from aiohttp import ClientTimeout
from web3 import AsyncHTTPProvider, Web3
from web3.eth import AsyncEth
from web3.providers.async_base import AsyncBaseProvider

from multicall.constants import AIOHTTP_TIMEOUT, NUM_PROCESSES, NO_STATE_OVERRIDE

chainids: Dict[Web3,int] = {}

@eth_retry.auto_retry
def chain_id(w3: Web3) -> int:
    '''
    Returns chain id for an instance of Web3. Helps save repeat calls to node.
    '''
    try:
        return chainids[w3]
    except KeyError:
        chainids[w3] = w3.eth.chain_id
        return chainids[w3]

async_w3s: Dict[Web3,Web3] = {}
process_pool_executor = ProcessPoolExecutor(NUM_PROCESSES)

def get_endpoint(w3: Web3) -> str:
    provider = w3.provider
    if isinstance(provider, str):
        return provider
    if hasattr(provider, "_active_provider"):
        provider = provider._get_active_provider(False)
    return provider.endpoint_uri

def get_async_w3(w3: Web3) -> Web3:
    if w3 in async_w3s:
        return async_w3s[w3]
    if w3.eth.is_async and isinstance(w3.provider, AsyncBaseProvider):
        timeout = w3.provider._request_kwargs["timeout"]
        if isinstance(timeout, ClientTimeout):
            timeout = timeout.total

        if timeout < AIOHTTP_TIMEOUT.total:
            w3.provider._request_kwargs["timeout"] = AIOHTTP_TIMEOUT

        async_w3s[w3] = w3
        return w3
    request_kwargs = {'timeout': AIOHTTP_TIMEOUT}
    async_w3 = Web3(
        provider=AsyncHTTPProvider(get_endpoint(w3), request_kwargs),
        # In older web3 versions, AsyncHTTPProvider objects come
        # with incompatible synchronous middlewares by default.
        middlewares=[],
    )
    async_w3.eth = AsyncEth(async_w3)
    async_w3s[w3] = async_w3
    return async_w3

def get_event_loop() -> asyncio.AbstractEventLoop:
    try:
        return asyncio.get_event_loop()
    except RuntimeError as e: # Necessary for use with multi-threaded applications.
        if not str(e).startswith("There is no current event loop in thread"):
            raise e
        return asyncio.new_event_loop()

def await_awaitable(awaitable: Awaitable) -> Any:
    return get_event_loop().run_until_complete(awaitable)

async def run_in_subprocess(callable: Callable, *args: Any, **kwargs) -> Any:
    if NUM_PROCESSES == 1:
        return callable(*args, **kwargs)
    return await asyncio.get_event_loop().run_in_executor(process_pool_executor, callable, *args, **kwargs)

def raise_if_exception(obj: Any) -> None:
    if isinstance(obj, Exception):
        raise obj

def raise_if_exception_in(iterable: Iterable[Any]) -> None:
    for obj in iterable:
        raise_if_exception(obj)

async def gather(coroutines: Iterable[Coroutine]) -> None:
    results = await asyncio.gather(*coroutines, return_exceptions=True)
    raise_if_exception_in(results)
    return results

def state_override_supported(w3: Web3) -> bool:
    if chain_id(w3) in NO_STATE_OVERRIDE:
        return False
    return True
