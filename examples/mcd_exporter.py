import time
from functools import partial
from decimal import Decimal
from multicall import Call, Multicall
from prometheus_client import start_http_server, Gauge


MCD_VAT = '0x35d1b3f3d7966a1dfe207aa4514c12a259a0492b'
MCD_VOW = '0xa950524441892a31ebddf91d3ceefa04bf454466'
MCD_DAI = '0x6b175474e89094c44da98b954eedeac495271d0f'
UNISWAP_EXCHANGE = '0x2a1530C4C41db0B0b2bB646CB5Eb1A67b7158667'
SAI = '0x89d24a6b4ccb1b6faa2625fe562bdd9a23260359'
MCD_JOIN_SAI = '0xad37fd42185ba63009177058208dd1be4b136e6b'
MCD_GOV = '0x9f8f72aa9304c8b593d555f12ef6589cc3a579a2'
GEM_PIT = '0x69076e44a9C70a67D5b79d95795Aba299083c275'
ETH = '0xc02aaa39b223fe8d0a0e5c4f27ead9083c756cc2'
MCD_JOIN_ETH_A = '0x2f0b23f53734252bda2277357e97e1517d6b042a'
BAT = '0x0d8775f648430679a709e98d2b0cb6250d2887ef'
MCD_JOIN_BAT_A = '0x3d0b1912b66114d4096f48a8cee3a56c231772ca'
USDC = '0xA0b86991c6218b36c1d19D4a2e9Eb0cE3606eB48'
MCD_JOIN_USDC_A = '0xA191e578a6736167326d05c119CE0c90849E84B7'
MCD_POT = '0x197e90f9fad81970ba7976f33cbd77088e5d7cf7'
CDP_MANAGER = '0x5ef30b9986345249bc32d8928b7ee64de9435e39'
MCD_JUG = '0x19c0976f590d67707e62397c87829d896dc0f1f1'
MCD_FLIP_ETH_A = '0xd8a04f5412223f513dc55f839574430f5ec15531'
MCD_FLIP_BAT_A = '0xaa745404d55f88c108a28c86abe7b5a1e7817c07'
MCD_FLIP_USDC_A = '0xE6ed1d09a19Bd335f051d78D5d22dF3bfF2c28B1'
MCD_SPOT = '0x65c79fcb50ca1594b025960e539ed7a9a6d434a3'
CHAI = '0x06AF07097C9Eeb7fD685c692751D5C66dB49c215'
MCD_FLAP = '0xdfE0fb1bE2a52CDBf8FB962D5701d7fd0902db9f'
MCD_FLOP = '0x4D95A049d5B0b7d32058cd3F2163015747522e99'

mcd = Gauge('mcd', 'multi-collateral dai', ['param'])

ilks = ['eth', 'bat', 'sai', 'usdc']
params = [
    'Line', 'debt', 'vice', 'base', 'cdps', 'sys_locked', 'sys_surplus', 'sys_debt',
    'vow_dai', 'vow_sin', 'surplus_buffer', 'debt_size', 'ash', 'sin',
    'dai_supply', 'chai_supply', 'mkr_supply', 'uniswap_dai', 'gem_pit',
    'savings_pie', 'pie_chi', 'pot_drip', 'dsr', 'pot_fee', 'savings_dai',
    'flop_kicks', 'flap_kicks',
]


def from_wad(value):
    return Decimal(value) / 10**18


def from_ray(value):
    return Decimal(value) / 10**27


def from_rad(value):
    return Decimal(value) / 10**45


def from_wei(value, decimals=18):
    return Decimal(value) / 10**decimals


from_wad = partial(from_wei, decimals=18)
from_ray = partial(from_wei, decimals=27)
from_rad = partial(from_wei, decimals=45)


def from_ilk(values):
    return {
        'Art': from_wad(values[0]),
        'rate': from_ray(values[1]),
        'spot': from_ray(values[2]),
        'line': from_rad(values[3]),
        'dust': from_rad(values[4]),
    }


def from_jug(values):
    return {
        'duty': from_ray(values[0]),
        'rho': values[1],
    }


def from_spot(values):
    return {
        'pip': values[0],
        'mat': from_ray(values[1]),
    }


def calc_fee(rate):
    return rate ** (60 * 60 * 24 * 365) * 100 - 100


def get_fee(base, jug):
    return calc_fee(base + jug['duty'])


multi = Multicall([
    Call(MCD_VAT, ['Line()(uint256)'], [['Line', from_rad]]),
    Call(MCD_VAT, ['debt()(uint256)'], [['debt', from_rad]]),
    Call(MCD_VAT, ['vice()(uint256)'], [['vice', from_rad]]),
    Call(MCD_VAT, ['dai(address)(uint256)', MCD_VOW], [['vow_dai', from_rad]]),
    Call(MCD_VAT, ['sin(address)(uint256)', MCD_VOW], [['vow_sin', from_rad]]),
    Call(MCD_VAT, ['ilks(bytes32)((uint256,uint256,uint256,uint256,uint256))', b'ETH-A'], [['eth_ilk', from_ilk]]),
    Call(MCD_VAT, ['ilks(bytes32)((uint256,uint256,uint256,uint256,uint256))', b'BAT-A'], [['bat_ilk', from_ilk]]),
    Call(MCD_VAT, ['ilks(bytes32)((uint256,uint256,uint256,uint256,uint256))', b'SAI'], [['sai_ilk', from_ilk]]),
    Call(MCD_VAT, ['ilks(bytes32)((uint256,uint256,uint256,uint256,uint256))', b'USDC-A'], [['usdc_ilk', from_ilk]]),
    Call(MCD_VOW, ['hump()(uint256)'], [['surplus_buffer', from_rad]]),
    Call(MCD_VOW, ['sump()(uint256)'], [['debt_size', from_rad]]),
    Call(MCD_VOW, ['Ash()(uint256)'], [['ash', from_rad]]),
    Call(MCD_VOW, ['Sin()(uint256)'], [['sin', from_rad]]),
    Call(MCD_DAI, ['totalSupply()(uint256)'], [['dai_supply', from_wad]]),
    Call(MCD_DAI, ['balanceOf(address)(uint256)', UNISWAP_EXCHANGE], [['uniswap_dai', from_wad]]),
    Call(SAI, ['totalSupply()(uint256)'], [['sai_supply', from_wad]]),
    Call(SAI, ['balanceOf(address)(uint256)', MCD_JOIN_SAI], [['sai_locked', from_wad]]),
    Call(MCD_GOV, ['balanceOf(address)(uint256)', GEM_PIT], [['gem_pit', from_wad]]),
    Call(ETH, ['balanceOf(address)(uint256)', MCD_JOIN_ETH_A], [['eth_locked', from_wad]]),
    Call(BAT, ['totalSupply()(uint256)'], [['bat_supply', from_wad]]),
    Call(BAT, ['balanceOf(address)(uint256)', MCD_JOIN_BAT_A], [['bat_locked', from_wad]]),
    Call(USDC, ['totalSupply()(uint256)'], [['usdc_supply', partial(from_wei, decimals=6)]]),
    Call(USDC, ['balanceOf(address)(uint256)', MCD_JOIN_USDC_A], [['usdc_locked', partial(from_wei, decimals=6)]]),
    Call(MCD_POT, ['Pie()(uint256)'], [['savings_pie', from_wad]]),
    Call(MCD_POT, ['chi()(uint256)'], [['pie_chi', from_ray]]),
    Call(MCD_POT, ['rho()(uint256)'], [['pot_drip', None]]),
    Call(MCD_POT, ['dsr()(uint256)'], [['dsr', from_ray]]),
    Call(CDP_MANAGER, ['cdpi()(uint256)'], [['cdps', None]]),
    Call(MCD_JUG, ['base()(uint256)'], [['base', from_ray]]),
    Call(MCD_JUG, ['ilks(bytes32)((uint256,uint256))', b'ETH-A'], [['eth_jug', from_jug]]),
    Call(MCD_JUG, ['ilks(bytes32)((uint256,uint256))', b'BAT-A'], [['bat_jug', from_jug]]),
    Call(MCD_JUG, ['ilks(bytes32)((uint256,uint256))', b'SAI'], [['sai_jug', from_jug]]),
    Call(MCD_JUG, ['ilks(bytes32)((uint256,uint256))', b'USDC-A'], [['usdc_jug', from_jug]]),
    Call(MCD_FLIP_ETH_A, ['kicks()(uint256)'], [['eth_kicks', None]]),
    Call(MCD_FLIP_BAT_A, ['kicks()(uint256)'], [['bat_kicks', None]]),
    Call(MCD_FLIP_USDC_A, ['kicks()(uint256)'], [['usdc_kicks', None]]),
    Call(MCD_SPOT, ['ilks(bytes32)((address,uint256))', b'ETH-A'], [['eth_mat', from_spot]]),
    Call(MCD_SPOT, ['ilks(bytes32)((address,uint256))', b'BAT-A'], [['bat_mat', from_spot]]),
    Call(MCD_SPOT, ['ilks(bytes32)((address,uint256))', b'USDC-A'], [['usdc_mat', from_spot]]),
    Call(CHAI, ['totalSupply()(uint256)'], [['chai_supply', from_wad]]),
    Call(MCD_GOV, ['totalSupply()(uint256)'], [['mkr_supply', from_wad]]),
    Call(MCD_FLOP, ['kicks()(uint256)'], [['flop_kicks', None]]),
    Call(MCD_FLAP, ['kicks()(uint256)'], [['flap_kicks', None]])
])


def fetch_data():
    data = multi()
    data['eth_fee'] = get_fee(data['base'], data['eth_jug'])
    data['bat_fee'] = get_fee(data['base'], data['bat_jug'])
    data['sai_fee'] = get_fee(data['base'], data['sai_jug'])
    data['usdc_fee'] = get_fee(data['base'], data['usdc_jug'])
    data['pot_fee'] = calc_fee(data['dsr'])
    data['savings_dai'] = data['savings_pie'] * data['pie_chi']
    data['eth_price'] = data['eth_mat']['mat'] * data['eth_ilk']['spot']
    data['bat_price'] = data['bat_mat']['mat'] * data['bat_ilk']['spot']
    data['usdc_price'] = data['usdc_mat']['mat'] * data['usdc_ilk']['spot']
    data['sys_locked'] = data['eth_price'] * data['eth_locked'] + data['bat_price'] * data['bat_locked'] + data['usdc_price'] * data['usdc_locked'] + data['sai_locked']
    data['sys_surplus'] = data['vow_dai'] - data['vow_sin']
    data['sys_debt'] = data['vow_sin'] - data['sin'] - data['ash']
    return data


def update():
    data = fetch_data()
    for param in params:
        mcd.labels(param).set(data[param])
    for ilk in ilks:
        for param in ['supply', 'locked', 'price', 'kicks', 'fee']:
            key = f'{ilk}_{param}'
            if key not in data:
                continue
            mcd.labels(key).set(data[key])
        for param in ['Art', 'rate', 'spot', 'line', 'dust']:
            mcd.labels(f'{ilk}_{param}').set(data[f'{ilk}_ilk'][param])
        for param in ['duty', 'rho']:
            mcd.labels(f'{ilk}_{param}').set(data[f'{ilk}_jug'][param])


def loop():
    start_http_server(8000)
    while True:
        update()
        time.sleep(15)


if __name__ == "__main__":
    loop()
