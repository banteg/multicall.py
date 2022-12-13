
import pytest
from brownie import web3
from multicall.utils import *
from web3.providers.async_base import AsyncBaseProvider


class UST(Exception):
    pass

oopsie = UST("oops")

def work():
    pass

async def coro():
    return

def exception_coro():
    raise oopsie


def test_chain_id():
    assert chain_id(web3) == 1

def test_await_awaitable():
    assert await_awaitable(coro()) == None

def test_raise_if_exception():
    with pytest.raises(UST):
        raise_if_exception(UST("oops"))

def test_raise_if_exception_in():
    with pytest.raises(UST):
        raise_if_exception_in(["BTC", "ETH", UST("oops")])

def test_gather():
    assert await_awaitable(gather([coro(),coro(),coro(),coro(),coro()])) == [None,None,None,None,None]

def test_gather_with_exception():
    with pytest.raises(UST):
        await_awaitable(gather([coro(),coro(),coro(),coro(),exception_coro()]))

def test_get_endpoint_brownie():
    assert get_endpoint(web3) == web3.provider.endpoint_uri

def test_get_endpoint_web3py():
    web3py_w3 = Web3(get_endpoint(web3))
    assert get_endpoint(web3py_w3) == web3.provider.endpoint_uri

@pytest.mark.skip(reason="no local endpoint setup")
def test_get_endpoint_web3py_auto():
    assert get_endpoint(Web3()) == 'http://localhost:8545'

def test_get_async_w3_with_sync():
    w3 = get_async_w3(web3)
    assert w3.eth.is_async
    assert isinstance(w3.provider, AsyncBaseProvider)
    assert await_awaitable(w3.eth.chain_id) == 1

def test_get_async_w3_with_async():
    async_w3 = get_async_w3(web3)
    w3 = get_async_w3(async_w3)
    assert w3 == async_w3
    assert await_awaitable(w3.eth.chain_id) == 1

def test_run_in_subprocess():
    assert await_awaitable(run_in_subprocess(work)) == None
