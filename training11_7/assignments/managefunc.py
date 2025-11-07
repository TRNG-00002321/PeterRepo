import filemodule

fname = "todo.txt"
def add(task: dict):
    filemodule.appendfile(fname, task)
def view():
    data = filemodule.loadfile(fname)
    return data
def complete(taskname: str):
    #mark input task as complete
    exist = False
    data = filemodule.loadfile(fname)
    objs = list(filter(lambda x: x["Task"] == taskname, data))
    if len(objs) > 0:
        exist = True
        for i in objs:
            i["Complete"] = True

    filemodule.overwritefile(fname, data)
    return exist

def delete(taskname: str):
    #remove input task
    exist = False
    data = filemodule.loadfile(fname)
    objs = list(filter(lambda x: x["Task"] != taskname, data))
    if data != objs:
        exist = True
    filemodule.overwritefile(fname, objs)
    return exist

