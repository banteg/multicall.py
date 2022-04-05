
from typing import Dict

from web3 import Web3

from multicall.constants import Network

chainids: Dict[Web3,int] = {}

def chain_id(w3: Web3) -> int:
    '''
    Returns chain id for an instance of Web3. Helps save repeat calls to node.
    '''
    try:
        return chainids[w3]
    except KeyError:
        chainids[w3] = w3.eth.chain_id
        return chainids[w3]

def state_override_supported(w3: Web3) -> bool:
    if chain_id(w3) in [ Network.Gnosis ]:
        return False
    return True
