from multicall import Call

CHAI = '0x06AF07097C9Eeb7fD685c692751D5C66dB49c215'


def from_wei(value):
    return value / 1e18


def test_call():
    call = Call(CHAI, 'name()(string)', [['name', None]])
    assert call() == {'name': 'Chai'}


def test_call_with_args():
    call = Call(CHAI, 'balanceOf(address)(uint256)', [['balance', from_wei]])
    assert isinstance(call([CHAI])['balance'], float)


def test_call_with_predefined_args():
    call = Call(CHAI, ['balanceOf(address)(uint256)', CHAI], [['balance', from_wei]])
    assert isinstance(call()['balance'], float)
