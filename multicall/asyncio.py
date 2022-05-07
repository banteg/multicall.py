import asyncio
import threading
from concurrent.futures import ProcessPoolExecutor
from typing import Dict

from web3 import AsyncHTTPProvider, Web3
from web3.eth import AsyncEth

async_w3s: Dict[Web3,Web3] = {}
async_loop = asyncio.get_event_loop()
process_pool_executor = ProcessPoolExecutor(16)

def get_async_w3(w3: Web3) -> Web3:
    if w3 in async_w3s:
        return async_w3s[w3]
    async_w3 = Web3(AsyncHTTPProvider(w3.provider.endpoint_uri))
    async_w3.eth = AsyncEth(async_w3)
    async_w3s[w3] = async_w3
    return async_w3


