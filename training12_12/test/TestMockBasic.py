import unittest
from unittest.mock import Mock


def greet(func):
    return "Hello " + func() + "!"

class TestMockBasic(unittest.TestCase):
    def test_mock_return(self):
        name = "eggbert"
        fake = Mock(return_value=name)
        res = greet(fake)

        self.assertEqual(res, "Hello " + name + "!")

        fake.assert_called_once()
        fake.assert_called_once_with()