import pytest
import pytest_mock

from src import total

def calculate_discount(price, discount_provider):
    discount = discount_provider.get_discount()
    return price - (price * discount / 100)

# test code
def test_calculate_discount(mocker):
    # Mock the get_discount method
    mock_discount_provider = mocker.Mock()
    mock_discount_provider.get_discount.side_effect = [10, 20]
    mock_discount_provider.get_discount.return_value = 10


    result = calculate_discount(100, mock_discount_provider)
    assert result == 90
    result = calculate_discount(100, mock_discount_provider)
    assert result == 80





