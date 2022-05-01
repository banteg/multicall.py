import asyncio
import threading
from concurrent.futures import ProcessPoolExecutor
from typing import Dict

from web3 import AsyncHTTPProvider, Web3
from web3.eth import AsyncEth

async_w3s: Dict[Web3,Web3] = {}

def start_background_loop(loop: asyncio.AbstractEventLoop) -> None:
    asyncio.set_event_loop(loop)
    loop.run_forever()

def get_async_w3(w3: Web3) -> Web3:
    if w3 in async_w3s:
        return async_w3s[w3]
    async_w3 = Web3(AsyncHTTPProvider(w3.provider.endpoint_uri))
    async_w3.eth = AsyncEth(async_w3)
    async_w3s[w3] = async_w3
    return async_w3

async_loop = asyncio.new_event_loop()
threading.Thread(target=start_background_loop, args=(async_loop,), daemon=True).start()

process_pool_executor = ProcessPoolExecutor(16)
