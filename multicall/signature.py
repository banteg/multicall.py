from typing import Any, List, Optional, Tuple

# For eth_abi versions < 2.2.0, `decode` and `encode` have not yet been added.
# As we require web3 ^5.27, we require eth_abi compatability with eth_abi v2.0.0b6 and greater.
try:
    from eth_abi import decode, encode
except ImportError: 
    from eth_abi import encode_abi as encode, decode_abi as decode

from eth_typing.abi import Decodable, TypeStr
from eth_utils import function_signature_to_4byte_selector


def parse_signature(signature: str) -> Tuple[str, List[TypeStr], List[TypeStr]]:
    """
    Breaks 'func(address)(uint256)' into ['func', ['address'], ['uint256']]
    """
    parts: List[str] = []
    stack: List[str] = []
    start: int = 0
    for end, character in enumerate(signature):
        if character == '(':
            stack.append(character)
            if not parts:
                parts.append(signature[start:end])
                start = end
        if character == ')':
            stack.pop()
            if not stack:  # we are only interested in outermost groups
                parts.append(signature[start:end + 1])
                start = end + 1
    function = ''.join(parts[:2])
    input_types = parse_typestring(parts[1])
    output_types = parse_typestring(parts[2])
    return function, input_types, output_types

def parse_typestring(typestring: str) -> Optional[List[TypeStr]]:
    if typestring == "()":
        return []
    parts = []
    part = ''
    inside_tuples = 0
    for character in typestring[1:-1]:
        if character == "(":
            inside_tuples += 1
        elif character == ")":
            inside_tuples -= 1
        elif character == ',' and inside_tuples == 0:
            parts.append(part)
            part = ''
            continue
        part += character
    parts.append(part)
    return parts


class Signature:
    def __init__(self, signature: str) -> None:
        self.signature = signature
        self.function, self.input_types, self.output_types = parse_signature(signature)
        self.fourbyte = function_signature_to_4byte_selector(self.function)

    def encode_data(self, args: Optional[Any] = None) -> bytes:
        return self.fourbyte + encode(self.input_types, args) if args else self.fourbyte

    def decode_data(self, output: Decodable) -> Any:
        return decode(self.output_types, output)
