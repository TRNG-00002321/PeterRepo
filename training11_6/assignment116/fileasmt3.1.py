"""

Need to receive user input to enter data into the system as well as retrieve it


"""
import json
import sys
from functools import reduce

if __name__ == "__main__":
    print("Welcome to my Dataservice")

    try:
        mode = input("Enter E for data entry or R for data retrieval.\n")
        mode = mode.upper()
    except Exception:
        print("Mode input failed, terminating")
        sys.exit()
    if "E" in mode:
        print("Data Entry Mode")

        try:
            name = input("Enter name here\n")
            age = int(input("Enter age here\n"))
            city = input("Enter city here\n")
            print("Enter courses here, use 'Q' to escape")
            courses = " "
            clist = []
            while courses.upper() not in "Q":
                courses = input("Course Name: ")
                if courses.upper() in "Q":
                    break
                clist.append(courses)
        except TypeError:
            print("invalid input type, terminating")
            sys.exit()
        except Exception:
            print("data input failure, terminating")
            sys.exit()
        data = {"Name": name, "Age": age, "City": city, "Courses": clist}
        print(f"Adding this data to the file: {data}")

        try:
            with open("dataentries.txt", "a") as file:
                file.write("\n")
                json.dump(data, file, indent = None)
        except Exception:
            print("json file entry failure, terminating")
            sys.exit()

    elif "R" in mode:
        print("Data Retrieval Mode")
        try:
            with open("dataentries.txt", "r") as file:
                lines = file.readlines()
                # print(lines)
                objs = []
                for i in lines:
                    objs.append(json.loads(i))
                # print(objs)
        except Exception:
            print("Parsing file failed, terminating")
            sys.exit()

        try:
            name = input("Enter name to search for here\n")
        except Exception:
            print("Search parameter input failed, terminating")
            sys.exit()

        objs = list(filter(lambda x: x["Name"] == name, objs))
        if len(objs) > 0:
            print("Found matching items")
            for i in objs:
                print(i)
        else:
            print("Found no matching items")
    else:
        print("Mode not found, terminating")
        sys.exit()
    print("Thank you for using my Dataservice, Goodbye!")
