# mypy: disable-error-code="attr-defined"
from functools import lru_cache
from typing import Any, Final, List, Optional, Tuple, final

from eth_typing import Decodable, TypeStr
from eth_utils import function_signature_to_4byte_selector

from multicall.utils import decode, encode


# TODO: handle the cache internally so it doesn't need to go thru python space
get_4byte_selector: Final = lru_cache(maxsize=None)(function_signature_to_4byte_selector)


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


@lru_cache(maxsize=None)
def _get_signature(signature: str) -> "Signature":
    return Signature(signature)


@final
class Signature:
    __slots__ = "signature", "function", "input_types", "output_types"

    def __init__(self, signature: str) -> None:
        self.signature: Final = signature
        parsed = parse_signature(signature)
        self.function: Final = parsed[0]
        self.input_types: Final = parsed[1]
        self.output_types: Final = parsed[2]

    @property
    def fourbyte(self) -> bytes:
        return get_4byte_selector(self.function)

    def encode_data(self, args: Optional[Any] = None) -> bytes:
        return self.fourbyte + encode(self.input_types, args) if args else self.fourbyte

    def decode_data(self, output: Decodable) -> Any:
        return decode(self.output_types, output)
