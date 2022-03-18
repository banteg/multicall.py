from typing import Any, Dict, List, Optional, Tuple

import requests
from web3 import Web3

from multicall import Call
from multicall.constants import (MULTICALL2_ADDRESSES, MULTICALL2_BYTECODE,
                                 MULTICALL_ADDRESSES, w3)

chainids = {}

def chain_id(w3: Web3) -> int:
    '''
    Returns chain id for an instance of Web3. Helps save repeat calls to node.
    '''
    try:
        return chainids[w3]
    except KeyError:
        chainids[w3] = w3.eth.chain_id
        return chainids[w3]

def split_calls(calls: List[Call]) -> Tuple[List[Call],List[Call]]:
    '''
    Split calls into 2 batches in case request is too large
    '''
    center = len(calls) // 2
    chunk_1 = calls[:center]
    chunk_2 = calls[center:]
    return chunk_1, chunk_2

class Multicall:
    def __init__(
        self, 
        calls: List[Call], 
        block_id: Optional[int] = None, 
        require_success: Optional[bool] = True, 
        _w3: Optional[Web3] = w3
    ) -> None:
        self.calls = calls
        self.block_id = block_id
        self.require_success = require_success
        self.w3 = _w3
        self.chainid = chain_id(self.w3)
        if require_success is True:
            multicall_map = MULTICALL_ADDRESSES if self.chainid in MULTICALL_ADDRESSES else MULTICALL2_ADDRESSES
            self.multicall_sig = 'aggregate((address,bytes)[])(uint256,bytes[])'
        else:
            multicall_map = MULTICALL2_ADDRESSES
            self.multicall_sig = 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])'
        self.multicall_address = multicall_map[self.chainid]

    def __call__(self) -> Dict[str,Any]:
        result = {}
        for call, (success, output) in zip(self.calls, self.fetch_outputs()):
            result.update(call.decode_output(output, success))

        return result

    def fetch_outputs(self, calls: Optional[List[Call]] = None) -> Tuple[Tuple[bool,Any]]:
        if calls is None:
            calls = self.calls
        
        aggregate = Call(
            self.multicall_address,
            self.multicall_sig,
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
        except HTTPError as e:
            if 'request entity too large' not in str(e).lower():
                raise
            chunk_1, chunk_2 = split_calls(self.calls)
            return self.fetch_outputs(chunk_1) + self.fetch_outputs(chunk_2)
