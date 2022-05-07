from multicall import Call, Multicall
from multicall.multicall import batcher
from tests.fixtures import await_awaitable

CHAI = '0x06AF07097C9Eeb7fD685c692751D5C66dB49c215'
DUMMY_CALL = Call(CHAI, 'totalSupply()(uint)', [['totalSupply',None]])
batcher.step = 10_000

def from_wei(val):
    return val / 1e18

def from_wei_require_success(success,val):
    assert success
    return val / 1e18

def from_ray(val):
    return val / 1e18

def from_ray_require_success(success,val):
    assert success
    return val / 1e27


def test_multicall():
    multi = Multicall([
        Call(CHAI, 'totalSupply()(uint256)', [['supply', from_wei]]),
        Call(CHAI, ['balanceOf(address)(uint256)', CHAI], [['balance', from_ray]]),
    ])
    result = multi()
    print(result)
    assert isinstance(result['supply'], float)
    assert isinstance(result['balance'], float)

def test_multicall_no_success():
    multi = Multicall([
        Call(CHAI, 'transfer(address,uint256)(bool)', [['success', lambda success, ret_flag: (success, ret_flag)]]),
        Call(CHAI, ['balanceOf(address)(uint256)', CHAI], [['balance', lambda success, value: (success, from_ray(value))]]),
    ], require_success=False)

    result = multi()
    print(result)
    assert isinstance(result['success'], tuple)
    assert isinstance(result['balance'], tuple)

def test_multicall_async():
    multi = Multicall([
        Call(CHAI, 'totalSupply()(uint256)', [['supply', from_wei]]),
        Call(CHAI, ['balanceOf(address)(uint256)', CHAI], [['balance', from_ray]]),
    ])
    result = await_awaitable(multi.async_call())
    print(result)
    assert isinstance(result['supply'], float)
    assert isinstance(result['balance'], float)

def test_multicall_no_success_async():
    multi = Multicall([
        Call(CHAI, 'transfer(address,uint256)(bool)', [['success', lambda success, ret_flag: (success, ret_flag)]]),
        Call(CHAI, ['balanceOf(address)(uint256)', CHAI], [['balance', lambda success, value: (success, from_ray(value))]]),
    ], require_success=False)

    result = await_awaitable(multi.async_call())
    print(result)
    assert isinstance(result['success'], tuple)
    assert isinstance(result['balance'], tuple)

def test_batcher_batch_calls_even():
    batcher.step = 10_000
    calls = [DUMMY_CALL for i in range(30_000)]
    batches = batcher.batch_calls(calls,batcher.step)
    # NOTE batcher.step == 10_000, so with 30_000 calls you should have 3 batches
    assert len(batches) == 3
    for batch in batches:
        assert len(batch) <= batcher.step
    assert sum(len(batch) for batch in batches) == len(calls)

def test_batcher_batch_calls_odd():
    batcher.step = 10_000
    calls = [DUMMY_CALL for i in range(29_999)]
    batches = batcher.batch_calls(calls,batcher.step)
    # NOTE batcher.step == 10_000, so with 30_000 calls you should have 3 batches
    assert len(batches) == 3
    for batch in batches:
        assert len(batch) <= batcher.step
    assert sum(len(batch) for batch in batches) == len(calls)

def test_batcher_split_calls_even():
    calls = [DUMMY_CALL for i in range(30_000)]
    split = batcher.split_calls(calls,batcher.step)
    assert len(split) == 2
    assert sum(len(batch) for batch in split) == len(calls)
    assert len(split[0]) == 15_000
    assert len(split[1]) == 15_000

def test_batcher_split_calls_odd():
    calls = [DUMMY_CALL for i in range(29_999)]
    split = batcher.split_calls(calls,batcher.step)
    assert len(split) == 2
    assert sum(len(batch) for batch in split) == len(calls)
    assert len(split[0]) == 14_999
    assert len(split[1]) == 15_000

def test_batcher_step_down_and_retry():
    batcher.step = 100_000
    calls = [Call(CHAI, 'totalSupply()(uint)', [[f'totalSupply{i}',None]]) for i in range(100_000)]
    results = Multicall(calls)()
    assert batcher.step < 100_000
    assert len(results) == len(calls)
