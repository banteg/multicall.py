from multicall import Signature

# For eth_abi versions < 2.2.0, `encode` has not yet been added.
# As we require web3 >=5.27, we require eth_abi compatability with eth_abi v2.0.0b6 and greater.
try:
    from eth_abi import encode
except ImportError:
    from eth_abi import encode_abi as encode


args = ((1, 2, 3), "0x" + "f" * 40, b"data")
types = ["uint256[]", "address", "bytes"]


def test_signature_parsing():
    sig = Signature("aggregate((address,bytes)[])(uint256,bytes[])")
    assert sig.function == "aggregate((address,bytes)[])"
    assert sig.input_types == ["(address,bytes)[]"]
    assert sig.output_types == ["uint256", "bytes[]"]


def test_signature_encoding():
    sig = Signature("test(uint256[],address,bytes)()")
    assert sig.encode_data(args) == sig.fourbyte + encode(types, args)


def test_signature_decoding():
    sig = Signature("test()(uint256[],address,bytes)")
    data = encode(types, args)
    assert sig.decode_data(data) == args
