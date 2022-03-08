from typing import List

from multicall import Call
from multicall.constants import (MULTICALL2_ADDRESSES, MULTICALL2_BYTECODE,
                                 MULTICALL_ADDRESSES, w3)


class Multicall:
    def __init__(self, calls: List[Call], _w3=None, block_id=None, require_success: bool=True):
        self.calls = calls
        self.block_id = block_id
        self.require_success = require_success

        if _w3 is None:
            self.w3 = w3
        else:
            self.w3 = _w3

        self.chainid = chain_id(self.w3)

    def __call__(self):
        result = {}
        for call, (success, output) in zip(self.calls, self.fetch_outputs()):
            result.update(call.decode_output(output, success))

        return result

    def fetch_outputs(self, calls = None):
        if calls is None:
            calls = self.calls
        
        if self.require_success is True:
            multicall_map = MULTICALL_ADDRESSES if self.chainid in MULTICALL_ADDRESSES else MULTICALL2_ADDRESSES
            multicall_sig = 'aggregate((address,bytes)[])(uint256,bytes[])'
        else:
            multicall_map = MULTICALL2_ADDRESSES
            multicall_sig = 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])'

        aggregate = Call(
            multicall_map[self.chainid],
            multicall_sig,
            returns=None,
            _w3=self.w3,
            block_id=self.block_id,
            state_override_code=MULTICALL2_BYTECODE
        )

        try:
            if self.require_success is True:
                args = [[[call.target, call.data] for call in calls]]
                _, outputs = aggregate(args)
                outputs = ((None, output) for output in outputs)
            else:
                args = [self.require_success, [[call.target, call.data] for call in calls]]
                _, _, outputs = aggregate(args)
            return outputs
        except Exception as e:
            if 'too large' not in str(e):
                raise
            chunk_1, chunk_2 = split_calls(self.calls)
            chunk_1 = self.fetch_outputs(chunk_1)
            chunk_2 = self.fetch_outputs(chunk_2)
            return chunk_1 + chunk_2


def split_calls(calls):
    center = len(calls) // 2
    chunk_1 = calls[:center]
    chunk_2 = calls[center:]
    return chunk_1, chunk_2

chainids = {}

def chain_id(w3):
    '''Helps save repeat calls to node'''
    try:
        return chainids[w3]
    except KeyError:
        chainids[w3] = w3.eth.chain_id
        return chainids[w3]