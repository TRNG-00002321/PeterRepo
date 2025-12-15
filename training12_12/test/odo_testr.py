import unittest
from unittest.mock import Mock, patch
from src import odometer

class TestClass(unittest.TestCase):

    def testAlertLow(self):
        odometer.speed = Mock()
        odometer.speed.return_value = 59

        val = odometer.alert()
        self.assertTrue(val)
        odometer.speed.assert_called_once()

    def testAlertHigh(self):
        odometer.speed = Mock()
        odometer.speed.return_value = 101

        val = odometer.alert()
        self.assertTrue(val)
        odometer.speed.assert_called_once()

    def testAlertValidLow(self):
        odometer.speed = Mock()
        odometer.speed.return_value = 60

        val = odometer.alert()
        self.assertFalse(val)
        odometer.speed.assert_called_once()

    def testAlertValidHigh(self):
        odometer.speed = Mock()
        odometer.speed.return_value = 100

        val = odometer.alert()
        self.assertFalse(val)
        odometer.speed.assert_called_once()


if __name__ == '__main__':
    unittest.main()