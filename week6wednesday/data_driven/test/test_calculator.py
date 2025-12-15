import pytest
from data_driven.src.calculator import Calculator
from data_driven.test.conftest import load_test_cases


# Load test cases at module level
addition_cases = load_test_cases("calculator_tests.json", "addition_tests")
division_cases = load_test_cases("calculator_tests.json", "division_tests")
division_by_zero_cases = load_test_cases("calculator_tests.json", "division_by_zero_tests")


class TestCalculatorDataDriven:

    @pytest.fixture(autouse=True)
    def setup(self):
        self.calc = Calculator()


    @pytest.mark.parametrize(
        "a, b, expected, description",
        [(c["a"], c["b"], c["expected"], c["description"]) for c in addition_cases]
    )
    def test_addition(self, a, b, expected, description):
        result = self.calc.add(a, b)
        assert expected == result

    @pytest.mark.parametrize(
        "a, b, expected, description",
        [(c["a"], c["b"], c["expected"], c["description"]) for c in division_cases]
    )
    def test_division(self, a, b, expected, description):
        result = self.calc.divide(a, b)
        assert expected == result

    @pytest.mark.parametrize(
        "a, b, description",
        [(c["a"], c["b"],  c["description"]) for c in division_by_zero_cases]
    )
    def test_addition(self, a, b, description):
        with pytest.raises(ZeroDivisionError) as context:
            self.calc.divide(a, b)
        assert "zero" in str(context.value).lower()
