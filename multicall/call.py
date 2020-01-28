from dataclasses import dataclass
from eth_utils import to_checksum_address
from web3.auto import w3
from multicall.signature import Signature


class Call:
    def __init__(self, target, function, returns):
        self.target = to_checksum_address(target)
        if isinstance(function, list):
            self.function, *self.args = function
        else:
            self.function = function
            self.args = None
        self.signature = Signature(self.function)
        self.returns = returns

    def __call__(self, args=None):
        args = args or self.args
        calldata = self.signature.encode_data(args)
        output = w3.eth.call({'to': self.target, 'data': calldata})
        decoded = self.signature.decode_data(output)
        return {
            name: handler(value) if handler else value
            for (name, handler), value
            in zip(self.returns, decoded)
        }
