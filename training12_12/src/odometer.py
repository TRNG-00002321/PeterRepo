import unittest
from random import randint
from unittest import TestCase
from unittest.mock import Mock

def speed():
    return randint(40, 120)

def alert():
    s=speed()
    if s < 60 or s > 100:
        return True
    return False





