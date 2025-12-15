from unittest.mock import Mock

mock = Mock()

mock.api.return_value = {"id": 1, "name": "peenor"}

#prints object address
print(mock.api)
#prints data
print(mock.api())