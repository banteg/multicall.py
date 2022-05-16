import os
import sys
from brownie import network

if not network.is_connected():
    network.connect(os.environ['PYTEST_NETWORK'])
sys.path.insert(0, os.path.abspath('.'))
