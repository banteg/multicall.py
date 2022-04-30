
from time import time

from multicall.call import Call
from multicall.multicall import Multicall, batcher

CHAI = '0x06AF07097C9Eeb7fD685c692751D5C66dB49c215'

batcher.step = 100_000 #100_000

big_work = [Call(CHAI, 'totalSupply()(uint)', [[f'totalSupply{i}',None]]) for i in range(100_000)]

def do_big_work():
    start = time()
    results = Multicall(big_work)()
    assert batcher.step < 100_000
    assert len(results) == len(big_work)
    return time() - start

def test_async_improves_speed():
    first_run_with_bad_batcher_size = do_big_work()
    second_run_with_good_batcher_size = do_big_work()
    assert first_run_with_bad_batcher_size == second_run_with_good_batcher_size
    
