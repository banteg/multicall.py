from eth_abi import encode_abi
from multicall import Signature

args = ((1, 2, 3), '0x' + 'f' * 40, b'data')
types = ['uint256[]', 'address', 'bytes']


def test_signature_parsing():
    sig = Signature('aggregate((address,bytes)[])(uint256,bytes[])')
    assert sig.function == 'aggregate((address,bytes)[])'
    assert sig.input_types == ['(address,bytes)[]']
    assert sig.output_types == ['uint256','bytes[]']


def test_signature_encoding():
    sig = Signature('test(uint256[],address,bytes)()')
    assert sig.encode_data(args) == sig.fourbyte + encode_abi(types, args)


def test_signature_decoding():
    sig = Signature('test()(uint256[],address,bytes)')
    data = encode_abi(types, args)
    assert sig.decode_data(data) == args
