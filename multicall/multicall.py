from typing import List

from web3.auto import w3

from multicall import Call
from multicall.constants import MULTICALL_ADDRESSES


class Multicall:
    def __init__(self, calls: List[Call]):
        self.calls = calls

    def __call__(self):
        aggregate = Call(
            MULTICALL_ADDRESSES[w3.eth.chainId],
            'aggregate((address,bytes)[])(uint256,bytes[])',
        )
        args = [[[call.target, call.data] for call in self.calls]]
        block, outputs = aggregate(args)
        result = {}
        for call, output in zip(self.calls, outputs):
            result.update(call.decode_output(output))
        return result
