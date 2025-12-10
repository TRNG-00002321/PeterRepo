import mysql.connector


conn = mysql.connector.connect(user = "root", password = "password", host = "127.0.0.1", database = "database")
cursor = conn.cursor()
cursor.execute('''
    DROP TABLE IF EXISTS users01

''')
# Create a table (if it doesn't exist)
cursor.execute('''
    CREATE TABLE IF NOT EXISTS users01 (
        id INTEGER PRIMARY KEY AUTO_INCREMENT,
        name TEXT,
        age INTEGER
    )
''')

# Insert data using parameterized query
user_name = "Alice"
user_age = 30
query = "INSERT INTO users01 (name, age) VALUES ('%s', %d)" %(user_name, user_age)
cursor.execute(query)

# Select data using parameterized query
min_age = 25
cursor.execute("SELECT name, age FROM users01 WHERE age > %d"%(min_age,))
results = cursor.fetchall()
for row in results:
    print(f"Name: {row[0]}, Age: {row[1]}")

conn.commit()
conn.close()