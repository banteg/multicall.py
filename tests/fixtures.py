from typing import Any, Awaitable
from multicall.utils import async_loop

def await_awaitable(awaitable: Awaitable) -> Any:
    return async_loop.run_until_complete(awaitable)
