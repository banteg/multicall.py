# mypy: disable-error-code="attr-defined"
from typing import Any, Callable, Final, Generator, Iterable, List, Optional, Tuple, Union, final

import eth_retry
from cchecksum import to_checksum_address
from eth_typing import Address, ChecksumAddress, HexAddress, HexStr
from eth_typing.abi import Decodable
from web3 import Web3

from multicall.constants import Network, w3
from multicall.exceptions import StateOverrideNotSupported
from multicall.loggers import setup_logger
from multicall.signature import Signature, _get_signature
from multicall.utils import (
    _get_semaphore,
    chain_id,
    get_async_w3,
    state_override_supported,
)

logger: Final = setup_logger(__name__)
log_debug: Final = logger.debug

AnyAddress = Union[str, Address, ChecksumAddress, HexAddress]


@final
class Call:

    __slots__ = (
        "target",
        "returns",
        "block_id",
        "gas_limit",
        "state_override_code",
        "w3",
        "origin",
        "function",
        "args",
        "signature",
    )

    def __init__(
        self,
        target: AnyAddress,
        # 'funcName(dtype)(dtype)' or ['funcName(dtype)(dtype)', input0, input1, ...]
        function: Union[str, List[Union[str, Any]]],
        returns: Optional[Iterable[Tuple[str, Callable]]] = None,
        block_id: Optional[int] = None,
        gas_limit: Optional[int] = None,
        state_override_code: Optional[HexStr] = None,
        # This needs to be None in order to use process_pool_executor
        _w3: Optional[Web3] = None,
        origin: Optional[AnyAddress] = None,
    ) -> None:
        self.target: Final = to_checksum_address(target)
        self.returns: Final = returns
        self.block_id: Final = block_id
        self.gas_limit: Final = gas_limit
        self.state_override_code: Final = state_override_code
        self.w3: Final = _w3
        self.origin: Final = to_checksum_address(origin) if origin else None

        self.function: Final = function[0] if isinstance(function, list) else function
        self.args: Final = function[1:] if isinstance(function, list) else None
        self.signature: Final = _get_signature(self.function)

    def __repr__(self) -> str:
        string = f"<Call {self.function} on {self.target[:8]}"
        if self.block_id is not None:
            string += f" block={self.block_id}"
        if self.returns is not None:
            string += f" returns={self.returns}"
        return f"{string}>"

    @property
    def data(self) -> bytes:
        return self.signature.encode_data(self.args)

    @staticmethod
    def decode_output(
        output: Decodable,
        signature: Signature,
        returns: Optional[Iterable[Tuple[str, Optional[Callable]]]] = None,
        success: Optional[bool] = None,
    ) -> Any:

        if success is None:
            apply_handler = lambda handler, value: handler(value)
        else:
            apply_handler = lambda handler, value: handler(success, value)

        if success is None or success:
            try:
                decoded = signature.decode_data(output)
            except:
                success, decoded = False, [None] * (len(returns) if returns else 1)  # type: ignore
        else:
            decoded = [None] * (len(returns) if returns else 1)  # type: ignore

        if returns:
            return {
                name: apply_handler(handler, value) if handler else value
                for (name, handler), value in zip(returns, decoded)
            }
        else:
            return decoded if len(decoded) > 1 else decoded[0]

    @eth_retry.auto_retry
    def __call__(
        self,
        args: Optional[Any] = None,
        _w3: Optional[Web3] = None,
        *,
        block_id: Optional[int] = None,
    ) -> Any:
        _w3 = self.w3 or _w3 or w3
        args = prep_args(
            self.target,
            self.signature,
            args or self.args,
            block_id or self.block_id,
            self.origin,
            self.gas_limit,
            self.state_override_code,
        )
        result = Call.decode_output(
            _w3.eth.call(*args),
            self.signature,
            self.returns,
        )
        log_debug("%s returned %s", self, result)
        return result

    def __await__(self) -> Generator[Any, Any, Any]:
        return self.coroutine().__await__()

    @eth_retry.auto_retry
    async def coroutine(
        self,
        args: Optional[Any] = None,
        _w3: Optional[Web3] = None,
        *,
        block_id: Optional[int] = None,
    ) -> Any:
        _w3 = self.w3 or _w3 or w3

        if self.state_override_code and not state_override_supported(_w3):
            raise StateOverrideNotSupported(
                f"State override is not supported on {Network(chain_id(_w3)).__repr__()[1:-1]}."  # type: ignore [arg-type]
            )

        async with _get_semaphore():
            output = await get_async_w3(_w3).eth.call(  # type: ignore [misc]
                *prep_args(
                    self.target,
                    self.signature,
                    args or self.args,
                    block_id or self.block_id,
                    self.origin,
                    self.gas_limit,
                    self.state_override_code,
                )
            )

        result = Call.decode_output(output, self.signature, self.returns)
        log_debug("%s returned %s", self, result)
        return result


def prep_args(
    target: str,
    signature: Signature,
    args: Optional[Any],
    block_id: Optional[int],
    origin: Optional[ChecksumAddress],
    gas_limit: Optional[int],
    state_override_code: Optional[HexStr],
) -> List[Any]:

    calldata = signature.encode_data(args)

    call_dict = {"to": target, "data": calldata}
    prepared_args = [call_dict, block_id]

    if origin:
        call_dict["from"] = origin

    if gas_limit:
        call_dict["gas"] = gas_limit  # type: ignore [assignment]

    if state_override_code:
        prepared_args.append({target: {"code": state_override_code}})  # type: ignore [dict-item]

    return prepared_args
