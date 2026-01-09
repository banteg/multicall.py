import importlib.machinery
from pathlib import Path

import multicall.call as call_module
import multicall.constants as constants_module
import multicall.multicall as multicall_module


def test_compiled_extensions_loaded():
    extension_suffixes = tuple(importlib.machinery.EXTENSION_SUFFIXES)
    modules = {
        "multicall.call": call_module,
        "multicall.constants": constants_module,
        "multicall.multicall": multicall_module,
    }
    for name, module in modules.items():
        module_path = Path(module.__file__)
        assert (
            module_path.suffix in extension_suffixes
        ), f"{name} should be loaded from a compiled extension, got {module_path}"
