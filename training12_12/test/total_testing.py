import unittest
from unittest.mock import Mock, MagicMock, patch

from src import total, odometer


class TestTotal(unittest.TestCase):

    def test_read(self):
        dummy_data = [float(12), float(10), float(3)]
        total.read = MagicMock()
        total.read.return_value = dummy_data
        e_val = 25
        self.assertEqual(e_val, total.calc_total("egg"))
        total.read.assert_called_once()

    def test_read_patch(self):
        with patch('src.total.read') as read_mock:
            read_mock.return_value = [float(12), float(10), float(3)]
            self.assertEqual(25, total.calc_total("egg"))

    @patch('src.total.read')
    def test_read_decorated_patch(self, read_mock):
        read_mock.return_value = [float(12), float(10), float(3)]

        self.assertEqual(25, total.calc_total("egg"))

    def multiply_values(self, values):
        result =1
        for v in values:
            result *= v
        return result

    @patch('src.total.read')
    def test_multiply(self, mock_read):
        data = [1, 2, 3, 4]
        mock_read.return_value = data
        #this works too
        # with patch('src.total.calc_total') as mock_calc:
        #     #changes the entire function inside totaal to multiply values
        #     mock_calc.return_value = self.multiply_values(total.read())
        #     result = mock_calc('')
        #     self.assertEqual(result, 24)
        with patch('src.total.sum', side_effect = self.multiply_values):
            #changes sum inside the total calculation to multiply values instead
            result = total.calc_total('')
        self.assertEqual(result, 24)

    def negative_check_sf(self, values):
        if any (v < 0 for v in values):
            raise ValueError("Negative values bad")
        return sum(values)

    @patch('src.total.read')
    def test_negative(self, mock_read):
        data = [1, -2, 3, 4]
        mock_read.return_value = data
        with patch('src.total.sum', side_effect = self.negative_check_sf):
            with self.assertRaises(ValueError):
                result = total.calc_total('')


if __name__ == '__main__':
    unittest.main()
