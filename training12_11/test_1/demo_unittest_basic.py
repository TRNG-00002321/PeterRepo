import unittest
from src.Calculator import Calculator
class TestCalculator(unittest.TestCase):
    def setUp(self):
        # print("hi")
        self.calculator = Calculator()

    def test_add(self):
        n1, n2, expected = 1, 2, 3
        result = self.calculator.add(n1, n2)
        self.assertEqual(expected, result)

    def test_subtract(self):
        n1, n2, expected = 5, 4, 1
        result = self.calculator.subtract(n1, n2)
        self.assertEqual(expected, result)

    def test_even(self):
        self.assertTrue(self.calculator.is_even(2))
        self.assertFalse(self.calculator.is_even(3))

    @unittest.skipIf(True, "egg")
    def test_divide_by_zero(self):
        with self.assertRaises(ZeroDivisionError):
            self.calculator.divide(100, 0)

    def test_divide_by_zero_msg(self):
        with self.assertRaises(ZeroDivisionError) as context:
            self.calculator.divide(1, 0)
        self.assertEqual(str(context.exception), "Cannot divide by zero")

    def tearDown(self):
        self.calculator = None


