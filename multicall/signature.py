from typing import Any, List, Optional, Tuple

from eth_abi import decode_single, encode_single
from eth_typing.abi import Decodable
from eth_utils import function_signature_to_4byte_selector


def parse_signature(signature: str) -> Tuple[str,str,str]:
    """
    Breaks 'func(address)(uint256)' into ['func', '(address)', '(uint256)']
    """
    parts: List[str] = []
    stack: List[str] = []
    start: int = 0
    for end, letter in enumerate(signature):
        if letter == '(':
            stack.append(letter)
            if not parts:
                parts.append(signature[start:end])
                start = end
        if letter == ')':
            stack.pop()
            if not stack:  # we are only interested in outermost groups
                parts.append(signature[start:end + 1])
                start = end + 1
    function = ''.join(parts[:2])
    input_types = parts[1]
    output_types = parts[2]
    return function, input_types, output_types


class Signature:
    def __init__(self, signature: str) -> None:
        self.signature = signature
        self.function, self.input_types, self.output_types = parse_signature(signature)
        self.fourbyte = function_signature_to_4byte_selector(self.function)

    def encode_data(self, args: Optional[Any] = None) -> bytes:
        return self.fourbyte + encode_single(self.input_types, args) if args else self.fourbyte

    def decode_data(self, output: Decodable) -> Any:
        return decode_single(self.output_types, output)
