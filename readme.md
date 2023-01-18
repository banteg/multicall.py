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
    Call(MKR_TOKEN, ['balanceOf(address)(uint256)', MKR_WHALE], [('whale', from_wei)]),
    Call(MKR_TOKEN, ['balanceOf(address)(uint256)', MKR_FISH], [('fish', from_wei)]),
    Call(MKR_TOKEN, 'totalSupply()(uint256)', [('supply', from_wei)]),
])

multi()  # {'whale': 566437.0921992733, 'fish': 7005.0, 'supply': 1000003.1220798912}

# seth-style calls
Call(MKR_TOKEN, ['balanceOf(address)(uint256)', MKR_WHALE])()
Call(MKR_TOKEN, 'balanceOf(address)(uint256)')(MKR_WHALE)
# return values processing
Call(MKR_TOKEN, 'totalSupply()(uint256)', [('supply', from_wei)])()
```

for a full example, see implementation of [daistats](https://github.com/banteg/multicall.py/blob/master/examples/daistats.py).
original [daistats.com](https://daistats.com) made by [nanexcool](https://github.com/nanexcool/daistats).

## api

### `Signature(signature)`

- `signature` is a seth-style function signature of `function_name(input,types)(output,types)`. it also supports structs which need to be broken down to basic parts, e.g. `(address,bytes)[]`.

use `encode_data(args)` with input args to get the calldata. use `decode_data(output)` with the output to decode the result.

### `Call(target, function, returns)`

- `target` is the `to` address which is supplied to `eth_call`.
- `function` can be either seth-style signature of `method(input,types)(output,types)` or a list of `[signature, *args]`.
- `returns` is a list of tuples of `(name, handler)` for return values. if `returns` argument is omitted, you get a tuple, otherwise you get a dict. to skip processing of a value, pass `None` as a handler.

use `Call(...)()` with predefined args or `Call(...)(args)` to reuse a prepared call with different args.

use `decode_output(output)` with to decode the output and process it with `returns` handlers.

### `Multicall(calls)`

- `calls` is a list of calls with prepared values.

use `Multicall(...)()` to get the result of a prepared multicall.

### Environment Variables

- GAS_LIMIT: sets overridable default gas limit for Multicall to prevent out of gas errors. Default: 50,000,000
- MULTICALL_DEBUG: if set, sets logging level for all library loggers to logging.DEBUG
- MULTICALL_PROCESSES: pass an integer > 1 to use multiprocessing for encoding args and decoding results. Default: 1, which executes all code in the main process.
- AIOHTTP_TIMEOUT: sets aiohttp timeout period in seconds for async calls to node. Default: 30

## test
```bash
export WEB3_INFURE_PROJECT_ID=<your_infura_id>
export PYTEST_NETWORK='mainnet'
poetry run python -m pytest
```