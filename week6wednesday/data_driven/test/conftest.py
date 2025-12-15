import json
import pytest
from pathlib import Path

from data_driven.src.User import User


@pytest.fixture(scope="session")
def load_test_cases(filename, key):
    """Helper function to load specific test cases."""
    data_path = Path(__file__).parent / "test_data" / filename
    with open(data_path) as f:
        data = json.load(f)
    return data.get(key, [])




#ned to do scopes for module, class, function

@pytest.fixture
def user():
    """Create a standard test user."""
    return User(
        id=1,
        username="testuser",
        email="test@example.com",
    )
