import pytest

@pytest.fixture
def db_conn():
    #before
    print("sim conn")
    connection = "sim conn"
    #work
    yield connection
    #after
    print("closing")


def test_db_ops(db_conn):
    print("using db: ", db_conn)
    assert db_conn == "sim conn"


def test_conftest_user(sample_data):
    assert sample_data["name"]== "Alex"
    assert sample_data["age"]== 22
