import logging
import os

def setup_logger(name: str) -> logging.Logger:
    logger = logging.getLogger(name)
    if os.environ.get("MULTICALL_DEBUG", False):
        logger.addHandler(logging.StreamHandler())
        logger.setLevel(logging.DEBUG)
    return logger
