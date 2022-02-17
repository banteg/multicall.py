import sys
import unittest
from decimal import Decimal
from web3 import Web3
from web3.middleware import geth_poa_middleware
import pytest
import json
from pathlib import Path
from eth_utils import to_hex, is_hexstr, remove_0x_prefix

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

from multicall.multicall import get_multicall_map, load_abi

from multicall import Call, Multicall

def from_decimals(value):
    return Decimal(value)
                                
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
            cls.contract_interface = "owedPayment(address)(uint256)"
            cls.abi_rel_path = "../multicall/mc_contract_abi_0xeefba1e63905ef1d7acba5a8513c70307c1ce441.json"

        def get_abi(self):
            return load_abi(self.abi_rel_path)

        def get_contract(self):
            _w3 = self.get_w3()
            multicall_address = get_multicall_map(_w3.eth.chain_id)[_w3.eth.chain_id]
            return _w3.eth.contract(address=multicall_address, abi=self.get_abi())

        def get_w3(self):


            w3_url = self.rpc_endpoint_map.get(self.CHAIN,None)
            if w3_url is None:
                _w3 = w3
            else:
                _w3 = Web3(Web3.HTTPProvider(w3_url))

            # 
            # for block_number_attr_format in [
            #     'middleware_onion',
            #     'middleware_stack',
            # ]:
            #     if hasattr(w3, block_number_attr_format):
            #         w3_middleware = getattr(_w3, block_number_attr_format)

            # w3_middleware.inject(geth_poa_middleware, layer=0)

            return _w3

        def get_no_params_call(self):
            _w3 = self.get_w3()
            return Call(self.CONTRACT, ['decimals()(uint8)'], [[self.CONTRACT,from_decimals]], _w3 = _w3, block_id="latest")

        def get_with_params_call(self):
            _w3 = self.get_w3()
            return Call(self.CONTRACT, [self.contract_interface,self.ORACLE_1], [[self.ORACLE_1, from_v4]], _w3 = _w3, block_id="latest")

        def test_multicall_contract_getLastBlockHash_method(self):
            contract = self.get_contract()
            
            latest_block_hash = to_hex(contract.functions.getLastBlockHash().call())
            
            assert is_hexstr(latest_block_hash)
            assert len(latest_block_hash) == 66


        def test_multicall_contract_aggregate_method_no_params(self):
            if self.CONTRACT is not None:
                contract = self.get_contract()


                call = self.get_no_params_call()
                calldata = call.signature.encode_data(call.args)
                block_id, decimals = contract.functions.aggregate([{"target":self.CONTRACT,"callData":calldata}]).call()
                
                assert block_id > 0
                decoded_decimal = call.signature.decode_data(decimals[0])[0]
                assert decoded_decimal >= 8 and decoded_decimal <= 18
            else:
                print(">> CONTRACT is not set")

        def test_multicall_contract_aggregate_method_with_params(self):
            if self.CONTRACT is not None:
                contract = self.get_contract()


                call = self.get_with_params_call()
                calldata = call.signature.encode_data(call.args)
                block_id, resp = contract.functions.aggregate([{"target":self.CONTRACT,"callData":calldata}]).call()
                
                assert block_id > 0

                decoded_resp = call.signature.decode_data(resp[0])[0]
                assert decoded_resp >= 0
            else:
                print(">> CONTRACT is not set")

        def test_singe_call_no_params(self):
            if self.CONTRACT is not None:
                call = self.get_no_params_call()
                decimals = call()
                
                assert len(decimals) == 1
                assert decimals[self.CONTRACT] >= 8 and decimals[self.CONTRACT] <= 18
            else:
                print(">> CONTRACT is not set")

        def test_singe_call_with_params(self):
            if self.CONTRACT is not None:
                _w3 = self.get_w3()
                call = self.get_with_params_call()
                resp = call()
                assert self.ORACLE_1 in resp
                assert resp[self.ORACLE_1] >= 0
            else:
                print(">> CONTRACT is not set")
        
        def test_multicall_no_params(self):
            if self.CONTRACT is not None:
                _w3 = self.get_w3()
                multi = Multicall(
                    [
                        self.get_no_params_call()
                    ]
                , _w3 = _w3, block_id="latest")
                decimals = multi()
                assert len(decimals) == 1
                assert decimals[self.CONTRACT] >= 8 and decimals[self.CONTRACT] <= 18
            else:
                print(">> CONTRACT is not set")

        def test_multicall_with_params(self):
            if self.CONTRACT is not None:
                _w3 = self.get_w3()
                multi = Multicall(
                    [
                        self.get_with_params_call()
                    ]
                , _w3 = _w3, block_id="latest")
                resp = multi()
                assert resp[self.ORACLE_1] is not None
                assert resp[self.ORACLE_1] >= 0
                print(f"{self.ORACLE_1},{resp[self.ORACLE_1]}")
            else:
                print(">> CONTRACT is not set")

class Test_ARBITRUM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_ARBITRUM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_ARBITRUM
        cls.CONTRACT = "0x09410414Ca067b8763ce62DBEcA8160be9cfD548"
        cls.ORACLE_1 = "0x01f4e56D5ee46e84Edf8595ca7A7B62a3306De76"
        cls.ORACLE_2 = "0x1a6d5C4396EaF8ED93Ec77bf1aF9B43ffeD7814d"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_AVAX_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_AVAX_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_AVAX
        cls.CONTRACT = "0x0aCcDFd55026873CB12F75f66513b42fB4974245"
        cls.ORACLE_1 = "0x0499BEA33347cb62D79A9C0b1EDA01d8d329894c"
        cls.ORACLE_2 = "0x574A2f48049D962cF2e66d4381823Af93817Cd81"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_BSC_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_BSC_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_BSC
        cls.CONTRACT = "0x000f46946d47647c04A5f10269e9084FB8c8637A"
        cls.ORACLE_1 = "0x37Fc26312b831f7efb494cDB192c9aE91Fd27597"
        cls.ORACLE_2 = "0x18c930d5EA5e33A4b633Cf52d5e83278a6080347"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_ETHEREUM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_ETHEREUM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_ETHEREUM
        cls.CONTRACT = "0x00260Db07a22a6a5182213d8de1AbA0705A6Cd78"
        cls.ORACLE_1 = "0x1589d072aC911a55c2010D97839a1f61b1e3323A"
        cls.ORACLE_2 = "0x4D447f5479DF06Bf630bf836237352AfDB7680B0"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_FANTOM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_FANTOM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_FANTOM
        cls.CONTRACT = "0x0Aaf3EAcc3088691be6921fd33Bad8075590aE85"
        cls.ORACLE_1 = "0x05Ee5882122A86C8D15D8D5ECB42830503A7d0d8"
        cls.ORACLE_2 = "0x09285FBb87B75FBA9400683233C0BC1DE53afCa8"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_HECO_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_HECO_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_HECO
        cls.CONTRACT = "0x0AF7cEb1D2f3F5ceC626aEe32fF89EB15D40C586"
        cls.ORACLE_1 = "0x071FE390b362b866257c739C402f1e33FACC6181"
        cls.ORACLE_2 = "0x1834B7bF0a669D44948460B61b93A16154eda4B5"

#@pytest.mark.skip(reason='Could not find working Multicall contrac, check constants.py for examples')
class Test_MOONRIVER_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_MOONRIVER_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_MOONRIVER
        cls.CONTRACT = "0x0192a7CA918CC005253008BE85dce18b164de437"
        cls.ORACLE_1 = "0x03D4d742351dD27E2FCA3736F6285A75df48D15d"
        cls.ORACLE_2 = "0x6E9B986fD8CD727544916F47DFbED875CC6d7830"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_OPTIMISM_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_OPTIMISM_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_OPTIMISM
        cls.CONTRACT = "0x02f5E9e9dcc66ba6392f6904D5Fcf8625d9B19C9"
        cls.ORACLE_1 = "0x2878c587eba4C4251f97784cE124f7387305Ab32"
        cls.ORACLE_2 = "0x2bdF9249c350C68a43a9714c1b9153af54751b1C"
        cls.contract_interface = 'owedPayment(address)(uint256)'

class Test_POLYGON_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_POLYGON_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_POLYGON
        cls.CONTRACT = "0x00a27E2f64dE7B05E9ddF7aD6bA916d78458c8c7"
        cls.ORACLE_1 = "0x21148F81D302442c34D39cB65B82f5e7138F9bE6"
        cls.ORACLE_2 = "0x250ABd1D4EBC8e70a4981677D5525f827660bDE4"
        cls.contract_interface = 'owedPayment(address)(uint256)'

#@pytest.mark.skip(reason='Could not find working Multicall contrac, check constants.py for examples')
class Test_XDAI_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_XDAI_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_XDAI
        cls.CONTRACT = "0x016a45F646bbd35B61fE7A496a75D9Ea69bD243E"
        cls.ORACLE_1 = "0x11eB6a69A56DF3a89b99c4b1484691Af4AB0c508"
        cls.ORACLE_2 = "0x3036c926cCc3096beCF584E7523A1a57fdebba77"
        cls.contract_interface = 'owedPayment(address)(uint256)'

#@pytest.mark.skip(reason='TODO find target contract on HARMONY chain')
class Test_HARMONY_MultiCall(AbstractBase.BaseMultiCall):
    @classmethod
    def setUpClass(cls):
        super(Test_HARMONY_MultiCall, cls).setUpClass()
        cls.CHAIN = CHAIN_HARMONY
        cls.CONTRACT = None
        cls.contract_interface = None
