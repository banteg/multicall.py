from enum import IntEnum


class Network(IntEnum):
    Mainnet = 1
    Kovan = 42
    Rinkeby = 4
    Görli = 5
    xDai = 100
    Polygon = 137
    Bsc = 56
    Fantom = 250
    Heco = 128

MULTICALL_ADDRESSES = {
    Network.Mainnet: '0xeefBa1e63905eF1D7ACbA5a8513c70307C1cE441',
    Network.Kovan: '0x2cc8688C5f75E365aaEEb4ea8D6a480405A48D2A',
    Network.Rinkeby: '0x42Ad527de7d4e9d9d011aC45B31D8551f8Fe9821',
    Network.Görli: '0x77dCa2C955b15e9dE4dbBCf1246B4B85b651e50e',
    Network.xDai: '0xb5b692a88BDFc81ca69dcB1d924f59f0413A602a',
    Network.Polygon: '0x95028E5B8a734bb7E2071F96De89BABe75be9C8E',
    Network.Bsc: '0x1Ee38d535d541c55C9dae27B12edf090C608E6Fb',
    Network.Fantom: '0xb828C456600857abd4ed6C32FAcc607bD0464F4F',
    Network.Heco: '0xc9a9F768ebD123A00B52e7A0E590df2e9E998707',
}
