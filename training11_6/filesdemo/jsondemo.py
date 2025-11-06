#time to do json
import json


my_data = {
    "Name": "John",
    "Age": 30,
    "City": "Plano",
    "isStudent": True,
    "courses": ["QEA", "Home Ec"]
}


#writing json here
with open('data.json', 'w') as f:
    json.dump(my_data, f, indent = 4)#indent keeps this readable


#reading here
with open('data.json', 'r') as f:
    data = json.load(f)
print(data)