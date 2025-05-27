# mypy: disable-error-code="attr-defined"
from typing import Any, Dict, Final, List, Optional, Tuple, Union, final

import eth_abi.abi
import eth_abi.decoding
import eth_abi.encoding
import eth_hash.auto
from eth_typing import Decodable, TypeStr


_SIGNATURES: Final[Dict[str, "Signature"]] = {}

TupleEncoder: Final = eth_abi.encoding.TupleEncoder
TupleDecoder: Final = eth_abi.decoding.TupleDecoder

_keccak: Final = eth_hash.auto.keccak
_get_encoder: Final = eth_abi.abi.default_codec._registry.get_encoder
_get_decoder: Final = eth_abi.abi.default_codec._registry.get_decoder
_stream_cls: Final = eth_abi.abi.default_codec.stream_class


def get_4byte_selector(signature: str) -> bytes:
    return _keccak(signature.replace(" ", "").encode("utf-8"))[:4]


def parse_signature(signature: str) -> Tuple[str, List[TypeStr], List[TypeStr]]:
    """
    Breaks a function signature into its selector and lists of input and output ABI types.

    This function expects a signature of the form:
        "functionName(inputType1,inputType2,...)(outputType1,outputType2,...)"

    It returns a tuple with three elements:
      - The function selector which is formed by joining the function name with the first
        parenthesized group of input types. For example, for the signature "foo(address)(uint256)",
        the selector is "foo(address)".
      - A list of input type strings.
      - A list of output type strings.

    Examples:
        >>> parse_signature("foo(address)(uint256)")
        ('foo(address)', ['address'], ['uint256'])
        >>> parse_signature("bar(uint256,uint256)(bool)")
        ('bar(uint256,uint256)', ['uint256', 'uint256'], ['bool'])

    See Also:
        :func:`eth_utils.function_signature_to_4byte_selector`
    """
    parts: List[str] = []
    stack: List[str] = []
    start: int = 0
    for end, character in enumerate(signature):
        if character == "(":
            stack.append(character)
            if not parts:
                parts.append(signature[start:end])
                start = end
        if character == ")":
            stack.pop()
            if not stack:  # we are only interested in outermost groups
                parts.append(signature[start : end + 1])
                start = end + 1
    function = "".join(parts[:2])
    input_types = parse_typestring(parts[1])
    output_types = parse_typestring(parts[2])
    return function, input_types, output_types


def parse_typestring(typestring: str) -> List[TypeStr]:
    if typestring == "()":
        return []
    parts = []
    part = ""
    inside_tuples = 0
    for character in typestring[1:-1]:
        if character == "(":
            inside_tuples += 1
        elif character == ")":
            inside_tuples -= 1
        elif character == "," and inside_tuples == 0:
            parts.append(part)
            part = ""
            continue
        part += character
    parts.append(part)
    return parts


def _get_signature(signature: str) -> "Signature":
    try:
        return _SIGNATURES[signature]
    except KeyError:
        instance = Signature(signature)
        _SIGNATURES[signature] = instance
        return instance


@final
class Signature:
    __slots__ = (
        "signature",
        "function",
        "input_types",
        "output_types",
        "fourbyte",
        "_encoder",
        "_decoder",
    )

    def __init__(self, signature: str) -> None:
        self.signature: Final = signature
        parsed = parse_signature(signature)
        self.function: Final = parsed[0]
        input_types = parsed[1]
        self.input_types: Final = input_types
        output_types = parsed[2]
        self.output_types: Final = output_types
        self.fourbyte: Final = get_4byte_selector(self.function)
        self._encoder: Final = (
            TupleEncoder(encoders=[_get_encoder(type_str) for type_str in input_types])
            if input_types
            else None
        )
        self._decoder: Final = TupleDecoder(
            decoders=[_get_decoder(type_str) for type_str in output_types]
        )

    def encode_data(self, args: Optional[Union[List[Any], Tuple[Any, ...]]] = None) -> bytes:
        return self.fourbyte + self._encoder(args) if args else self.fourbyte  # type: ignore [misc]

    def decode_data(self, output: Decodable) -> Any:
        return self._decoder(_stream_cls(output))
