import sys
import unittest
from decimal import Decimal
from web3 import Web3
import pytest
import json
from pathlib import Path
from eth_utils import to_hex

from multicall.constants import (
    w3,
    CHAIN_ARBITRUM,
    CHAIN_AVAX,
    CHAIN_BSC,
    CHAIN_ETHEREUM,
    CHAIN_FANTOM,
    CHAIN_HARMONY,
    CHAIN_HECO,
    CHAIN_POLYGON,
    CHAIN_MOONRIVER,
    CHAIN_OPTIMISM,
    CHAIN_XDAI,
    PUBLIC_RPC_ENDPOINT_MAP,
)

from multicall.multicall import get_multicall_map

from multicall import Call, Multicall

                                
def from_v4(value):

    return Decimal(value) / 10**18

class AbstractBase:
    class BaseMultiCall(unittest.TestCase):
        @classmethod
        def setUpClass(cls):

            cls.rpc_endpoint_map = PUBLIC_RPC_ENDPOINT_MAP

            # WILL be updated
            cls.CHAIN = CHAIN_ETHEREUM
            cls.CONTRACT = "0x00260Db07a22a6a5182213d8de1AbA0705A6Cd78"
            cls.ORACLE_1 = "0x1589d072aC911a55c2010D97839a1f61b1e3323A"
            cls.ORACLE_2 = "0x4D447f5479DF06Bf630bf836237352AfDB7680B0"
            cls.contract_interface = 'owedPayment(address)(uint256)'

        def load_abi(self):

            file_content = {}

            file_dir = Path(__file__).parent

            with open(file_dir/'mc_contract_abi_0xeefba1e63905ef1d7acba5a8513c70307c1ce441.json') as f:
                file_content = json.load(f)

            return file_content

        def get_w3(self):
            w3_url = self.rpc_endpoint_map.get(self.CHAIN,None)
            if w3_url is None:
                _w3 = w3
            else:
                _w3 = Web3(Web3.HTTPProvider(w3_url))
            return _w3

        def test_multicall_contract_getLastBlockHash_method(self):
            _w3 = self.get_w3()
            multicall_address = get_multicall_map(_w3.eth.chain_id)[_w3.eth.chain_id]
            contract = _w3.eth.contract(address=multicall_address, abi=self.load_abi())
            latest_block_hash = to_hex(contract.functions.getLastBlockHash().call())
            assert latest_block_hash.startswith('0x')
            assert latest_block_hash.isalnum()
            assert len(latest_block_hash) == 66

class Test_ARBITRUM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_ARBITRUM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_ARBITRUM

class Test_AVAX_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_AVAX_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_AVAX

class Test_BSC_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_BSC_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_BSC

class Test_ETHEREUM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_ETHEREUM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_ETHEREUM

class Test_FANTOM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_FANTOM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_FANTOM

class Test_HECO_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_HECO_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_HECO

class Test_MOONRIVER_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_MOONRIVER_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_MOONRIVER

class Test_OPTIMISM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_OPTIMISM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_OPTIMISM

class Test_POLYGON_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_POLYGON_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_POLYGON

class Test_XDAI_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_XDAI_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_XDAI

class Test_HARMONY_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_HARMONY_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_HARMONY
