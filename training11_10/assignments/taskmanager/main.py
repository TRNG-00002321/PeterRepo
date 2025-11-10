from _pyrepl import console

from flask import Flask, render_template, request, redirect, url_for

import filemodule

app = Flask(__name__)


filename = "tasks.txt"

@app.route("/")
def welcome():
    return redirect(url_for("view_table"))


#Read
@app.route("/view", methods=["GET"])
def view_table():
    #TODO: create html page that loops through task dictionary

    return render_template("viewpage.html", tasks=filemodule.loadfile(filename))

#Create
@app.route("/create")
def create_page():
    return render_template("createpage.html")

@app.route("/add_task", methods=["POST"])
def add_task():
    print(request.values)
    tname = request.form["name"]
    tcomp = request.form.get("completed", False)
    # tcomp = request.form["completed"]
    tdes = request.form["desc"]
    #todo: create dictionary, filemodule append
    d = {"Task": tname,"Complete": tcomp, "Description": tdes}
    filemodule.appendfile(filename, d)
    # print(request.values)
    return redirect(url_for("view_table"))


@app.route("/delete")
def delete_page():
    #todo: html deletion form page
    return render_template("deletepage.html")

@app.route("/delete_task", methods=["POST"])
def delete_task():
    data = filemodule.loadfile(filename)
    objs = list(filter(lambda x: x["Task"] != request.form["name"], data))
    filemodule.overwritefile(filename, objs)
    return redirect(url_for("view_table"))

@app.route("/complete")
def complete_page():
    return render_template("completepage.html")

@app.route("/complete_task", methods=["POST"])
def complete_task():
    data = filemodule.loadfile(filename)
    objs = list(filter(lambda x: x["Task"] == request.form["name"], data))
    for i in objs:
        i["Complete"] = True
    filemodule.overwritefile(filename, data)
    return redirect(url_for("view_table"))


if __name__ == "__main__":
    app.run(debug=True)