from multicall import Call, Multicall

CHAI = '0x06AF07097C9Eeb7fD685c692751D5C66dB49c215'


def from_wei(val):
    return val / 1e18


def from_ray(val):
    return val / 1e27


def test_multicall():
    multi = Multicall([
        Call(CHAI, 'totalSupply()(uint256)', [['supply', from_wei]]),
        Call(CHAI, ['balanceOf(address)(uint256)', CHAI], [['balance', from_ray]]),
    ])
    result = multi()
    assert isinstance(result['supply'], float)
    assert isinstance(result['balance'], float)
