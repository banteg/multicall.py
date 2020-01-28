from eth_abi import encode_abi, decode_abi
from multicall import signature

args = ((1, 2, 3), '0x' + 'f' * 40, b'data')
types = ['uint256[]', 'address', 'bytes']


def test_signature_parsing():
    sig = signature.Signature('aggregate((address,bytes)[])(uint256,bytes[])')
    assert sig.parts == ['aggregate', '((address,bytes)[])', '(uint256,bytes[])']
    assert sig.input_types == '((address,bytes)[])'
    assert sig.output_types == '(uint256,bytes[])'


def test_signature_encoding():
    sig = signature.Signature('test(uint256[],address,bytes)()')
    assert sig.encode_data(args) == sig.fourbyte + encode_abi(types, args)


def test_signature_decoding():
    sig = signature.Signature('test()(uint256[],address,bytes)')
    data = encode_abi(types, args)
    assert sig.decode_data(data) == args
