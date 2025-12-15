import unittest

class TestStringExample(unittest.TestCase):

    def test_upper(self):
        self.assertEqual("foo".upper(), 'FOO')


    def test_isupper(self):
        self.assertTrue('FOO'.isupper())
        self.assertFalse('foo'.isupper())
