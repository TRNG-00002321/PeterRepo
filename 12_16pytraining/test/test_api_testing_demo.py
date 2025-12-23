import requests
import pytest

@pytest.fixture(scope="module")
def base_url():
    return "https://jsonplaceholder.typicode.com/"

@pytest.fixture(scope="module")
def session():
    session = requests.Session()
    session.headers.update({
        "Accept":"application/json",
        "Content-Type":"application/json"
    })
    yield session
    session.close()

@pytest.fixture(scope="module")
def sample_post():
    return{
        "title": "Test Post",
        "body": "Test Body",
        "userId":1
    }

class TestBasicRequest:

    def test_get_single_post(self, base_url, session):
        print("hi")
        response=session.get(base_url + "/posts/1")

        assert response.status_code == 200

        data = response.json()
        assert data["userId"] == 1
        assert "title" in data
        print(data)

    def test_get_param_post(self, base_url, session, sample_post):
        params = sample_post
        assert "userId" in params
        response = session.get(f"{base_url}/users/{params['userId']}")

        assert response.status_code == 200
        data = response.json()
        print(data)
        assert data["id"] == params["userId"]


    def test_create_post(self, base_url, session, sample_post):
        response = session.post(f"{base_url}/posts", json=sample_post)
        assert response.status_code == 201

    @pytest.mark.parametrize("post_id", [
        1,
        2,
        3,
        4
    ])
    def test_get_post_id(self, base_url, session, post_id):
        response = session.get(f"{base_url}/posts/{post_id}")
        assert response.status_code == 200

    @pytest.mark.parametrize("user_id,expected_name", [
        (1, "Leanne Graham"),
        (2, "Ervin Howell"),
        (3, "Clementine Bauch"),
        (4, "Patricia Lebsack"),
        (5, "Chelsey Dietrich")
    ])
    def test_user_names(self, base_url, session, user_id, expected_name):
        """Test user names match expected values"""
        response = session.get(f"{base_url}/users/{user_id}")

        assert response.status_code == 200
        assert response.json()["name"] == expected_name
