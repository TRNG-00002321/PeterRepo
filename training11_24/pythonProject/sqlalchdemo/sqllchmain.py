from sqlalchemy import create_engine, MetaData, Table, Column, Integer, String, select, insert, update

engine = create_engine('sqlite:///./college.db', echo = True)
meta = MetaData()

students = Table(
   'students', meta,
   Column('id', Integer, primary_key = True),
   Column('name', String),
   Column('email', String),
)
meta.create_all(engine)
# Construct the SELECT statement
stmt = select(students)

# Execute the statement and fetch results
with engine.connect() as connection:
    stmt = insert(students).values(name='Charlie', email='charlie@example.com')
    connection.execute(stmt)
    stmt = insert(students).values(name='Alice', email='alice@gmail.com')
    connection.execute(stmt)

    stmt = select(students)
    result = connection.execute(stmt)

    for row in result:
        print(row)

    stmt = select(students.c.name).where(students.c.name == 'Charlie')
    result = connection.execute(stmt)

    for row in result:
        print(row)


    stmt = update(students).where(students.c.name == 'Alice').values(email='alice_new@example.com')
    connection.execute(stmt)

    stmt = select(students.c.email).where(students.c.name == "Alice")
    result = connection.execute(stmt)

    for row in result:
        print(row)


    stmt = students.delete().where(students.c.id > 1)
    connection.execute(stmt)
    result = connection.execute(select(students))

    for row in result:
        print(row)

