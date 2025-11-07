"""
To-Do List Manager: Create a program to add, view, mark as complete, and delete tasks
from a list/dictionary, potentially saving the list/dictionary to a file.

Please use the following as well while writing code

1. Functions

2. Modules (Optional)

3. Imports (Optional)


"""
import managefunc as mf

def formatDict(taskdata):
    displaystr = "Task: "
    displaystr += taskdata["Task"]
    displaystr += "\n\t"
    displaystr += "Description: " + taskdata["Description"]
    displaystr += "\n\t"
    displaystr += "Completed: " + str(taskdata["Complete"])
    displaystr += "\n"
    return displaystr


if __name__ == "__main__":
    print("Welcome to todo list manager")
    userin = " "

    while userin.upper() not in "Q":
        userin = input("Enter V for View Mode, E for Edit Mode, or Q to quit\n")

        if userin.upper() in "V":
            display = mf.view()
            print("Current tasks:")
            for i in display:
                print(formatDict(i))
        elif userin.upper() in "E":
            userin = input("Enter A for Add Mode, C for Complete Mode, or D for Delete Mode\n")
            if userin.upper() in "A":
                taskname = input("Enter Task name: \n")
                desc = input("Add task description: \n")
                task = {"Task": taskname, "Complete": False, "Description": desc}
                mf.add(task)
            elif userin.upper() in "C":
                taskname = input("Enter Task name to complete: \n")
                mf.complete(taskname)
            elif userin.upper() in "D":
                taskname = input("Enter Task name to delete: \n")
                mf.delete(taskname)
            else:
                print("Invalid Mode selected")
        elif userin.upper() in "Q":
            print("Have a nice day")
        else:
            print("Invalid Mode selected")
