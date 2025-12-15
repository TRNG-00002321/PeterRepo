import pytest

from src.Calculator import Calculator



@pytest.fixture()
def calculator():
    return Calculator()



@pytest.mark.parametrize("num1, num2, expected_sum", [
    (1, 2, 3),
    (-7, 7, 0),
    (10, 15, 25)
])
def test_add(calculator, num1, num2, expected_sum):
    result = calculator.add(num1, num2)
    assert result == expected_sum

@pytest.mark.xfail()
def test_even(calculator):
    # calculator = Calculator()
    assert calculator.is_even(4) is False
    assert calculator.is_even(44)
    assert not calculator.is_even(444)

def test_div_zero(calculator):
    # calculator = Calculator()
    with pytest.raises(ZeroDivisionError):
        calculator.divide(1, 0)

def test_div_zero_context(calculator):
    # calculator = Calculator()
    with pytest.raises(ZeroDivisionError) as context:
        calculator.divide(1, 0)
    assert "zero" in str(context.value).lower()