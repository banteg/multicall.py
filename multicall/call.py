from eth_utils import to_checksum_address
from web3.auto import w3
from multicall import Signature


class Call:
    def __init__(self, target, function, returns=None, _w3=None, block_id=None):
        self.target = to_checksum_address(target)

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

    def decode_output(self, output):
        decoded = self.signature.decode_data(output)
        if self.returns:
            return {
                name: handler(value) if handler else value
                for (name, handler), value
                in zip(self.returns, decoded)
            }
        else:
            return decoded if len(decoded) > 1 else decoded[0]

    def __call__(self, args=None):
        args = args or self.args
        calldata = self.signature.encode_data(args)
        output = self.w3.eth.call({'to': self.target, 'data': calldata}, block_identifier=self.block_id)
        return self.decode_output(output)
