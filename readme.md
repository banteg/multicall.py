# multicall.py

python interface for makerdao's [multicall](https://github.com/makerdao/multicall) and a port of [multicall.js](https://github.com/makerdao/multicall.js)

## installation

```
pip install multicall
```

## example

```python
from multicall import Call, Multicall

# assuming you are on kovan
MKR_TOKEN = '0xaaf64bfcc32d0f15873a02163e7e500671a4ffcd'
MKR_WHALE = '0xdb33dfd3d61308c33c63209845dad3e6bfb2c674'
MKR_FISH = '0x2dfcedcb401557354d0cf174876ab17bfd6f4efd'

def from_wei(value):
    return value / 1e18

multi = Multicall([
    Call(MKR_TOKEN, ['balanceOf(address)(uint256)', MKR_WHALE], [['whale', from_wei]]),
    Call(MKR_TOKEN, ['balanceOf(address)(uint256)', MKR_FISH], [['fish', from_wei]]),
    Call(MKR_TOKEN, 'totalSupply()(uint256)', [['supply', from_wei]]),
])

multi()  # {'whale': 566437.0921992733, 'fish': 7005.0, 'supply': 1000003.1220798912}
```
