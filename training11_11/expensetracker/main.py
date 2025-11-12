"""


Requirements:

    Add, view, and delete expenses with date, category, and amount.
    Store data in a CSV or SQLite database.
    Calculate total and category-wise summaries.

Required Features

Implement all of the following to call the project complete:
Add an expense with fields:

    id (unique)
    date (ISO YYYY-MM-DD)
    amount (float)
    category (string)
    description (string, optional)
    List/view all expenses (paginated or limited view for CLI).
    Delete an expense by id.
    Edit/update an expense by id.

Persist data in:

    a CSV file (expenses.csv)
    Show summary statistics:
    Total expenses (all time)
    Total by category
    Total for a date range

Basic input validation and error handling (e.g., valid date, non-negative amount).


"""

import sqlite3
import sys

import dbfunc
from datetime import datetime


dformat = "%Y:%m:%d"
colSet = {"DATE","CATEGORY", "AMOUNT", "DESCRIPTION"}
def validate_date(date_string):
    try:
        datetime.strptime(date_string, dformat)
        return True
    except ValueError:
        return False

def view_transactions(tr_ls: []):
    for i in tr_ls:
        print(f"ID: {i[0]}\nDate: {i[1]}\nCategory: {i[3]}\t Amount:{i[2]}\n")
        if not i[4] == '':
            print(f"Decription: {i[4]}\n")
def view_transaction(tr_ls):
    i = tr_ls
    print(f"ID: {i[0]}\nDate: {i[1]}\nCategory: {i[3]}\t Amount:{i[2]}\n")
    if not i[4] == '':
        print(f"Decription: {i[4]}\n")

def to_float(val: str):
    try:
        nval = float(val)
    except ValueError:
        print("invalid float conversion")
        return None
    return nval

def calc_total():
    print("HI")


if __name__ == "__main__":
    print("Welcome to the expense tracker app")

    userin = " "
    while 1 == 1:
        userin = input("Enter V for View Mode, E for Edit Mode, A for Add Mode, T for Total Mode, Q to quit\n").upper()
        if userin == "V":
            """
            Total expenses (all time)
            Total by category
            Total for a date range
            
            """
            print("Overview:\n")
            # todo: allow user to define filters
            print(dbfunc.getexpenses())
            view_transactions(dbfunc.getexpenses())
        elif userin == "T":
            userin = input("Enter T again for Total expenses, C for by Category, and D for date range\n")
            if userin == "T":
                print(dbfunc.getexpensesum())

            elif userin == "C":
                ucat = input("Enter category\n")
                print(dbfunc.category_sum(ucat))
            elif userin == "D":

                d1 = input("Enter the first date\n")
                if not validate_date(d1):
                    print("Invalid date")
                    continue
                d2 = input("Enter the second date\n")
                if not validate_date(d2):
                    print("Invalid date")
                    continue
                print(dbfunc.date_sum(d1,d2))

            else:
                print("Invalid mode")
                continue
        elif userin == "E":
            print("Editing:")
            try:
                target_id = int(input("Enter the target id to edit\n"))
            except ValueError:
                print("invalid input")
                continue
            result = dbfunc.get_by_id(target_id)
            if not result == None:
                view_transaction(result)
            column = input("Which column should be edited\n")
            if column.upper() not in colSet:
                print("Invalid column")
                continue
            changed = input("Enter New value\n")
            if column.upper() == "DATE":
                if not validate_date(changed):
                    print("Invalid date")
                    continue
            if column.upper() == "AMOUNT":
                changed = to_float(changed)
                if(changed == None):
                    continue
            else:
                changed = "'" + changed + "'"
            succ = dbfunc.edit_where(column, changed, target_id)
            if succ:
                print("Successfully updated value")
            else:
                print("Failed to update value")

        elif userin == "A":
            print("Adding")
            date = input("Enter the date in YYYY:MM:DD format\n")
            if not (validate_date(date)):
                print("Invalid date")
                continue
            amount = input("Enter the amount of the expense\n")
            amount = to_float(amount)
            if(amount == None):
                continue
            category = input("Enter the category\n")
            description = input("Enter the description(optional)\n")
            if dbfunc.add_val(date, amount, category, description):
                print("Expense recording successful")
            else:
                print("Expense recording failed")


        elif userin == "Q":
            print("Thank you for using our services")
            sys.exit()
        else:
            print("Invalid input")
