from typing import Any, Callable, Iterable, List, Optional, Tuple, Union

from eth_typing import Address, ChecksumAddress, HexAddress
from eth_typing.abi import Decodable
from eth_utils import to_checksum_address
from web3 import Web3

from multicall import Signature
from multicall.constants import w3

AnyAddress = Union[str,Address,ChecksumAddress,HexAddress]

class Call:
    def __init__(
        self, 
        target: AnyAddress, 
        function: Union[str,Iterable[Union[str,Any]]], # 'funcName(dtype)(dtype)' or ['funcName(dtype)(dtype)', input0, input1, ...]
        returns: Optional[Iterable[Tuple[str,Callable]]] = None, 
        block_id: Optional[int] = None, 
        state_override_code: Optional[str] = None, 
        _w3: Web3 = w3
    ) -> None:
        self.target = to_checksum_address(target)
        self.returns = returns
        self.block_id = block_id
        self.state_override_code = state_override_code
        self.w3 = _w3

        self.args: Optional[List[Any]]
        if isinstance(function, list):
            self.function, *self.args = function
        else:
            self.function = function
            self.args = None

        self.signature = Signature(self.function)

    @property
    def data(self) -> bytes:
        return self.signature.encode_data(self.args)

    def decode_output(self, output: Decodable, success: Optional[bool] = None) -> Any:
        if success is None:
            apply_handler = lambda handler, value: handler(value)
        else:
            apply_handler = lambda handler, value: handler(success, value)

        if success is None or success:
            try:
                decoded = self.signature.decode_data(output)
            except:
                success, decoded = False, [None] * len(self.returns) # type: ignore
        else:
            decoded = [None] * len(self.returns) # type: ignore

        if self.returns:
            return {
                name: apply_handler(handler, value) if handler else value
                for (name, handler), value
                in zip(self.returns, decoded)
            }
        else:
            return decoded if len(decoded) > 1 else decoded[0]

    def __call__(self, args: Optional[Any] = None) -> Any:
        args = args or self.args
        calldata = self.signature.encode_data(args)

        args = [{'to': self.target, 'data': calldata}, self.block_id]

        if self.state_override_code:
            args.append({self.target: {'code': self.state_override_code}})

        output = self.w3.eth.call(*args)

        return self.decode_output(output)
