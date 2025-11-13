import sqlite3
import sys
DB_NAME = 'database/expense.db'

def initialize():

    user_query = """
            CREATE TABLE IF NOT EXISTS USER (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                username VARCHAR(255) NOT NULL,
                password VARCHAR(255) NOT NULL,
                role VARCHAR(255) NOT NULL
            );
            """
    expense_query ="""
            CREATE TABLE IF NOT EXISTS EXPENSE (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                FOREIGN KEY(user_id) REFERENCES USER(id),
                amount REAL NOT NULL,
                description VARCHAR(255) NOT NULL,
                date VARCHAR(255) NOT NULL
            );
            """
    approvals_query ="""
        CREATE TABLE IF NOT EXISTS APPROVALS(
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            FOREIGN KEY(expense_id) REFERENCES USER(id),
            status VARCHAR(255) NOT NULL,
            reviewer INT,
            comment VARCHAR(255),
            review_date VARCHAR(255)
        );
        """
    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute(user_query)
    conn.commit()
    cursor.execute(expense_query)
    conn.commit()
    cursor.execute(approvals_query)
    conn.commit()


def get_connection():
    try:
        conn = sqlite3.connect(DB_NAME)
    except Exception:
        print("Something went wrong")
        sys.exit()
    return conn


if __name__ == "__main__":
    initialize()