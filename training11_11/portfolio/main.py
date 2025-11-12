"""

Requirements:

    Build a simple personal portfolio with Flask.
    Have pages like Home,Projects, and Contact.
    Load project data from a JSON file.



"""
import json

from flask import Flask, redirect, url_for, render_template

app = Flask(__name__)

filename = "projects.json"

def readprojects():
    with open("projects.json") as f:
        pdict = json.load(f)
    plist = []
    for k in pdict.values():
        plist.append(k)
    # print(plist, pdict)
    return plist
@app.route("/")
def welcome():
    return render_template("Home.html")
@app.route("/projects")
def projects():
    return render_template("Projects.html", projects = readprojects())

@app.route("/about")
def about():
    return render_template("About_Me.html")





if __name__ == "__main__":
    app.run(debug=True)




