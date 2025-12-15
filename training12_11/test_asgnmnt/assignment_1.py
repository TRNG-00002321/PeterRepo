import pytest
from pytest_csv_params.decorator import csv_params

from src.Calculator import Calculator


@csv_params(
    data_file="test_asgnmnt/data.csv",
    data_casts={"num1":int, "num2":int, "expected":int}
)
def test_from_csv(num1, num2, expected):
    calculator = Calculator()
    assert expected == calculator.add(num1, num2)
