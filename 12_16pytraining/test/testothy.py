import pytest
import requests

from requests import Session
from requests.auth import HTTPBasicAuth
from requests.exceptions import RequestException


def test_demo01():
    response = requests.get("https://jsonplaceholder.typicode.com/posts/1")
    print("helloge")
    print(response.status_code)
    print(response.json())
    print(response.text)
    assert response.status_code == 200

def test_parameters():
    params = {
        "postId": 1
    }
    response = requests.get("https://jsonplaceholder.typicode.com/comments", params=params)
    print(response.status_code)
    # print(response.json())
    print(response.text)
    assert response.status_code == 200

def test_posting():
    json_dat = {
        "userId": 12,
        "id": 101,
        "title": "Horsing around",
        "body": "Having a fine time"
    }
    response = requests.post("https://jsonplaceholder.typicode.com/posts", json_dat)
    print(response.status_code)
    print(response.text)
    assert response.status_code == 201

def test_notfound():
    params = {"postId":9999}
    try:
        response = requests.get("https://jsonplaceholder.typicode.com/comments", params)
        response.raise_for_status()
        print("Found something not meant to exist", response.status_code)
    except requests.exceptions.HTTPError as e:
        print("Error: ", e)
        assert response.status_code == 404
