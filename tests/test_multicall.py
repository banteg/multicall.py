from typing import Any, Tuple
import pytest

from brownie import web3
from joblib import Parallel, delayed
from multicall import Call, Multicall
from multicall.multicall import batcher
from multicall.utils import await_awaitable

CHAI = "0x06AF07097C9Eeb7fD685c692751D5C66dB49c215"
WHOAMI = "0x66659E34096372C1aad8d459559432Ab0aa64569"
WETH = "0xC02aaA39b223FE8D0A0e5C4F27eAD9083C756Cc2"
DUMMY_CALL = Call(CHAI, "totalSupply()(uint)", [["totalSupply", None]])
batcher.step = 10_000


def from_wei(val):
    return val / 1e18


def from_wei_require_success(success, val):
    assert success
    return val / 1e18


def from_ray(val):
    return val / 1e18


def from_ray_require_success(success, val):
    assert success
    return val / 1e27


def unpack_no_success(success: bool, output: Any) -> Tuple[bool, Any]:
    return (success, output)


def test_multicall():
    multi = Multicall(
        [
            Call(CHAI, "totalSupply()(uint256)", [["supply", from_wei]]),
            Call(CHAI, ["balanceOf(address)(uint256)", CHAI], [["balance", from_ray]]),
        ]
    )
    result = multi()
    print(result)
    assert isinstance(result["supply"], float)
    assert isinstance(result["balance"], float)


def test_multicall_with_origin():
    multi = Multicall(
        [
            Call(WHOAMI, "sender()(address)", [["sender", None]]),
            Call(WHOAMI, "origin()(address)", [["origin", None]]),
        ],
        origin=CHAI,
    )
    result = multi()
    print(result)
    assert isinstance(result["sender"], str)
    assert isinstance(result["origin"], str)


def test_multicall_no_success():
    multi = Multicall(
        [
            Call(
                CHAI,
                "transfer(address,uint256)(bool)",
                [["success", unpack_no_success]],
            ),  # lambda success, ret_flag: (success, ret_flag)
            Call(
                CHAI,
                ["balanceOf(address)(uint256)", CHAI],
                [["balance", unpack_no_success]],
            ),  # lambda success, value: (success, from_ray(value))
        ],
        require_success=False,
    )
    result = multi()
    print(result)
    assert isinstance(result["success"], tuple)
    assert isinstance(result["balance"], tuple)


def test_multicall_async():
    multi = Multicall(
        [
            Call(CHAI, "totalSupply()(uint256)", [["supply", from_wei]]),
            Call(CHAI, ["balanceOf(address)(uint256)", CHAI], [["balance", from_ray]]),
        ]
    )
    result = await_awaitable(multi)
    print(result)
    assert isinstance(result["supply"], float)
    assert isinstance(result["balance"], float)


def test_multicall_no_success_async():
    multi = Multicall(
        [
            Call(
                CHAI,
                "transfer(address,uint256)(bool)",
                [["success", unpack_no_success]],
            ),
            Call(
                CHAI,
                ["balanceOf(address)(uint256)", CHAI],
                [["balance", unpack_no_success]],
            ),
        ],
        require_success=False,
    )
    result = await_awaitable(multi)
    print(result)
    assert isinstance(result["success"], tuple)
    assert isinstance(result["balance"], tuple)


def test_batcher_batch_calls_even():
    batcher.step = 10_000
    calls = [DUMMY_CALL for i in range(30_000)]
    batches = batcher.batch_calls(calls, batcher.step)
    # NOTE batcher.step == 10_000, so with 30_000 calls you should have 3 batches
    assert len(batches) == 3
    for batch in batches:
        print(".", end="")
        assert len(batch) <= batcher.step
    assert sum(len(batch) for batch in batches) == len(calls)


def test_batcher_batch_calls_odd():
    batcher.step = 10_000
    calls = [DUMMY_CALL for i in range(29_999)]
    batches = batcher.batch_calls(calls, batcher.step)
    # NOTE batcher.step == 10_000, so with 30_000 calls you should have 3 batches
    assert len(batches) == 3
    for batch in batches:
        assert len(batch) <= batcher.step
    assert sum(len(batch) for batch in batches) == len(calls)


def test_batcher_split_calls_even():
    calls = [DUMMY_CALL for i in range(30_000)]
    split = batcher.split_calls(calls, batcher.step)
    assert len(split) == 2
    assert sum(len(batch) for batch in split) == len(calls)
    assert len(split[0]) == 15_000
    assert len(split[1]) == 15_000


def test_batcher_split_calls_odd():
    calls = [DUMMY_CALL for i in range(29_999)]
    split = batcher.split_calls(calls, batcher.step)
    assert len(split) == 2
    assert sum(len(batch) for batch in split) == len(calls)
    assert len(split[0]) == 14_999
    assert len(split[1]) == 15_000


def test_multicalll_contract_methods():
    calls = [Call(CHAI, ["totalSupply()(uint)", CHAI, 1], [["totalSupply", None]])]
    multi = Multicall(calls)
    multi.add_base_fee()
    multi.add_block_hash(1)
    multi.add_block_number()
    multi.add_chain_id()
    multi.add_block_coinbase()
    multi.add_block_difficulty()
    multi.add_block_gas_limit()
    multi.add_block_timestamp()
    multi.add_eth_balance(CHAI, ("custom_balance", None))
    multi.add_last_block_hash()

    result = multi()
    print(result)
    assert isinstance(result["totalSupply"], int)
    assert isinstance(result["base_fee"], int)
    assert isinstance(result["block_hash"], bytes)
    assert isinstance(result["block_number"], int)
    assert isinstance(result["chain_id"], int)
    assert isinstance(result["coinbase"], str)
    assert isinstance(result["difficulty"], None | int)
    assert isinstance(result["gas_limit"], int)
    assert isinstance(result["timestamp"], int)
    assert isinstance(result["custom_balance"], int)
    assert isinstance(result["last_block_hash"], bytes)


@pytest.mark.skip(reason="long running")
def test_batcher_step_down_and_retry():
    batcher.step = 100_000
    calls = [Call(CHAI, "totalSupply()(uint)", [[f"totalSupply{i}", None]]) for i in range(100_000)]
    results = Multicall(calls)()
    assert batcher.step < 100_000
    assert len(results) == len(calls)


@pytest.mark.skip(reason="upgrade web3")
def test_multicall_threading():
    calls = [Call(CHAI, "totalSupply()(uint)", [[f"totalSupply{i}", None]]) for i in range(50_000)]
    Parallel(4, "threading")(
        delayed(Multicall(batch))() for batch in batcher.batch_calls(calls, batcher.step)
    )


@pytest.mark.skip(reason="upgraded web3")
def test_multicall_multiprocessing():
    # NOTE can't have middlewares for multiprocessing
    web3.provider.middlewares = tuple()
    web3.middleware_onion.clear()
    # TODO figure out why multiprocessing fails if you don't call request_func here
    web3.provider.request_func(web3, web3.middleware_onion)
    calls = [Call(CHAI, "totalSupply()(uint)", [[f"totalSupply{i}", None]]) for i in range(50_000)]
    Parallel(4, "multiprocessing")(
        delayed(Multicall(batch, _w3=web3))() for batch in batcher.batch_calls(calls, batcher.step)
    )
