import sqlite3
import sys

try:
    conn = sqlite3.connect('expense.db')
    cursor = conn.cursor()
    print("db conn")
    table_creation_query = """
        CREATE TABLE IF NOT EXISTS EXPENSE (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            Date VARCHAR(255) NOT NULL,
            amount FLOAT NOT NULL,
            category VARCHAR(255) NOT NULL,
            description VARCHAR(255)
        );
    """

    cursor.execute(table_creation_query)
except Exception:
    print("Something went wrong")
    sys.exit()

"""
    id (unique)
    date (ISO YYYY-MM-DD)
    amount (float)
    category (string)
    description (string, optional)
    List/view all expenses (paginated or limited view for CLI).
    Delete an expense by id.
    Edit/update an expense by id.
"""
def getexpenses():
    try:
        cursor.execute("SELECT * FROM EXPENSE")
        return cursor.fetchall()
    except Exception:
        print("Cursor select failed")
        return None

def getexpensesum():
    e = getexpenses()
    if e == None:
        print("Expense sum failed")
        return -1.0
    else:
        sum = 0.0
        for i in e:
            sum += i[2]
            return sum

def date_sum(d1, d2):
    query = "SELECT * FROM EXPENSE WHERE DATE BETWEEN '%s' AND '%s'"%(d1, d2)
    try:
        cursor.execute(query)
        l = cursor.fetchall()
        sum = 0.0
        for i in l:
            sum += i[2]
            return sum

    except Exception:
        print("Date Sum failed")
        return -1
def category_sum(value):
    query = "SELECT * FROM EXPENSE WHERE CATEGORY = '%s'" %value
    try:
        cursor.execute(query)
        l = cursor.fetchall()
        sum = 0.0
        for i in l:
            sum += i[2]
            return sum

    except Exception:
        print("Category Sum failed")
        return -1
def get_by_id(myid: int):
    try:
        cursor.execute("SELECT * FROM EXPENSE WHERE ID = %d" %myid)
        return cursor.fetchone()
    except Exception:
        print("Cursor select by id failed")
        return None
def getexpwhere(col: str):
    print("selecting where col is")
def delete_by_id(myid: int):
    try:
        cursor.execute("DELETE * FROM EXPENSE WHERE ID = %d" %myid)
        conn.commit()
    except Exception:
        print("Cursor delete by id failed")

def edit_where(column: str, value, myid: int):
    query = "UPDATE EXPENSE SET %s = %s WHERE ID = %f" %(column, value, myid)
    try:
        cursor.execute(query)
        conn.commit()
        return True
    except Exception:
        print("Cursor update failed")
        return False

def add_val(date: str, amount: float, category: str, description = ""):
    query = "INSERT INTO EXPENSE (Date, amount, category, description) VALUES ('%s', %f, '%s', '%s')" %(date, amount, category, description)
    # query = "INSERT INTO EXPENSE (Date, amount, category, description) VALUES ('2025:11:10', 10.8, 'Lunch', 'Burger')"
    # print(query)
    try:
        cursor.execute(query)
        conn.commit()
        return True
    except Exception:
        print("Cursor insert failed")
        return False