from typing import Optional

from eth_utils import to_checksum_address

from multicall import Signature
from multicall.constants import w3


class Call:
    def __init__(self, target, function, returns=None, _w3=None, block_id=None, state_override_code:str = None):
        self.target = to_checksum_address(target)
        self.state_override_code = state_override_code

        if isinstance(function, list):
            self.function, *self.args = function
        else:
            self.function = function
            self.args = None

        if _w3 is None:
            self.w3 = w3
        else:
            self.w3 = _w3

        self.signature = Signature(self.function)
        self.returns = returns
        self.block_id = block_id

    @property
    def data(self):
        return self.signature.encode_data(self.args)

    def decode_output(self, output, success: Optional[bool]=None):
        if success is None:
            apply_handler = lambda handler, value: handler(value)
        else:
            apply_handler = lambda handler, value: handler(success, value)

        if success is None or success:
            try:
                decoded = self.signature.decode_data(output)
            except:
                success, decoded = False, [None] * len(self.returns)
        else:
            decoded = [None] * len(self.returns)

        if self.returns:
            return {
                name: apply_handler(handler, value) if handler else value
                for (name, handler), value
                in zip(self.returns, decoded)
            }
        else:
            return decoded if len(decoded) > 1 else decoded[0]

    def __call__(self, args=None):
        args = args or self.args
        calldata = self.signature.encode_data(args)

        args = [{'to': self.target, 'data': calldata}, self.block_id]

        no_state_override_args = args[:]

        if self.state_override_code:
           args.append({self.target: {'code': self.state_override_code}})
        
        try:
            output = self.w3.eth.call(*args)
        except ValueError as val_error:
            print(f"{val_error} retrying without state override")
            output = self.w3.eth.call(*no_state_override_args)

        return self.decode_output(output)
