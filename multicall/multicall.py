from typing import List

from multicall import Call
from multicall.constants import (MULTICALL2_ADDRESSES, MULTICALL2_BYTECODE,
                                 MULTICALL_ADDRESSES, w3)

def get_multicall_map(chain_id):
    return MULTICALL_ADDRESSES if chain_id in MULTICALL_ADDRESSES else MULTICALL2_ADDRESSES

class Multicall:
    def __init__(self, calls: List[Call], _w3=None, block_id=None, require_success: bool=True):
        self.calls = calls
        self.block_id = block_id
        self.require_success = require_success

        if _w3 is None:
            self.w3 = w3
        else:
            self.w3 = _w3

    def __call__(self):
        if self.require_success is True:
            multicall_map = get_multicall_map(self.w3.eth.chain_id)
            multicall_sig = 'aggregate((address,bytes)[])(uint256,bytes[])'
        else:
            multicall_map = MULTICALL2_ADDRESSES
            multicall_sig = 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])'

        aggregate = Call(
            multicall_map[self.w3.eth.chain_id],
            multicall_sig,
            returns=None,
            _w3=self.w3,
            block_id=self.block_id,
            state_override_code=MULTICALL2_BYTECODE
        )

        if self.require_success is True:
            args = [[[call.target, call.data] for call in self.calls]]
            _, outputs = aggregate(args)
            outputs = ((None, output) for output in outputs)
        else:
            args = [self.require_success, [[call.target, call.data] for call in self.calls]]
            _, _, outputs = aggregate(args)


        result = {}
        for call, (success, output) in zip(self.calls, outputs):
            result.update(call.decode_output(output, success))

        return result
