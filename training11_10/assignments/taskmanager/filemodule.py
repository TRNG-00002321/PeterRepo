import json
def loadfile(fname: str):
    data = []
    with open(fname, "r") as f:
        lines = f.readlines()
        for i in lines:
            data.append(json.loads(i))
    return data


def appendfile(fname:str, data):
    with open(fname, "a") as f:
        json.dump(data, f)
        f.write("\n")


def overwritefile(fname:str, data):
    with open(fname, "w") as f:
        for i in data:
            json.dump(i, f)
            f.write("\n")