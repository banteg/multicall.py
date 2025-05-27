# mypy: disable-error-code="attr-defined"
from asyncio import AbstractEventLoop, Semaphore, new_event_loop, set_event_loop
from asyncio import gather as _gather
from asyncio import get_event_loop as _get_event_loop
from typing import Any, Awaitable, Dict, Final, Iterable, List, TypeVar

import eth_retry
from aiohttp import ClientTimeout
from web3 import AsyncHTTPProvider, Web3
from web3.eth import AsyncEth
from web3.providers.async_base import AsyncBaseProvider

from multicall.constants import AIOHTTP_TIMEOUT, ASYNC_SEMAPHORE, NO_STATE_OVERRIDE

try:
    from web3 import AsyncWeb3
except ImportError:
    AsyncWeb3 = None  # type: ignore [assignment, misc]

try:
    from web3 import WebsocketProviderV2
except ImportError:
    WebsocketProviderV2 = None


__T = TypeVar("__T")

chainids: Final[Dict[Web3, int]] = {}


@eth_retry.auto_retry  # type: ignore [arg-type]
def chain_id(w3: Web3) -> int:
    """
    Returns chain id for an instance of Web3. Helps save repeat calls to node.
    """
    try:
        return chainids[w3]
    except KeyError:
        chainids[w3] = w3.eth.chain_id
        return chainids[w3]


async_w3s: Final[Dict[Web3, Web3]] = {}


def get_endpoint(w3: Web3) -> str:
    provider = w3.provider
    if isinstance(provider, str):
        return provider
    if hasattr(provider, "_active_provider"):
        provider = provider._get_active_provider(False)
    return provider.endpoint_uri  # type: ignore [no-any-return]


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

    endpoint = get_endpoint(w3)
    request_kwargs = {"timeout": AIOHTTP_TIMEOUT}
    if WebsocketProviderV2 and endpoint.startswith(("wss:", "ws:")):
        provider = WebsocketProviderV2(endpoint, request_kwargs)
    else:
        provider = AsyncHTTPProvider(endpoint, request_kwargs)

    # In older web3 versions, AsyncHTTPProvider objects come
    # with incompatible synchronous middlewares by default.
    if AsyncWeb3:  # type: ignore [truthy-function]
        async_w3 = AsyncWeb3(provider=provider, middlewares=[])  # type: ignore [call-arg]
    else:
        async_w3 = Web3(provider=provider, middlewares=[])
        async_w3.eth = AsyncEth(async_w3)

    async_w3s[w3] = async_w3  # type: ignore [assignment]
    return async_w3  # type: ignore [return-value]


def get_event_loop() -> AbstractEventLoop:
    try:
        loop = _get_event_loop()
    except RuntimeError as e:  # Necessary for use with multi-threaded applications.
        if not str(e).startswith("There is no current event loop in thread"):
            raise e
        loop = new_event_loop()
        set_event_loop(loop)
    return loop


def await_awaitable(awaitable: Awaitable[__T]) -> __T:
    return get_event_loop().run_until_complete(awaitable)


def raise_if_exception(obj: Any) -> None:
    if isinstance(obj, Exception):
        raise obj


def raise_if_exception_in(iterable: Iterable[Any]) -> None:
    for obj in iterable:
        raise_if_exception(obj)


async def gather(coroutines: Iterable[Awaitable[__T]]) -> List[__T]:
    results = await _gather(*coroutines, return_exceptions=True)
    raise_if_exception_in(results)
    return results  # type: ignore [return-value]


_state_override_supported: Final[Dict[Web3, bool]] = {}


def state_override_supported(w3: Web3) -> bool:
    try:
        return _state_override_supported[w3]
    except KeyError:
        is_supported = chain_id(w3) not in NO_STATE_OVERRIDE
        _state_override_supported[w3] = is_supported
        return is_supported


_semaphores: Final[Dict[AbstractEventLoop, Semaphore]] = {}


def _get_semaphore() -> Semaphore:
    """
    Returns a `Semaphore` attached to the current event loop.

    NOTE: This prevents an "attached to a different loop" edge case if the event loop is changed during your script run
    """
    loop = get_event_loop()
    try:
        return _semaphores[loop]
    except KeyError:
        semaphore = _semaphores[loop] = Semaphore(ASYNC_SEMAPHORE)
        return semaphore
