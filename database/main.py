import psycopg2

try:
    conn = psycopg2.connect(database="botArmy",
                            host="localhost",
                            user="postgres",
                            password="ayush11442",
                            port="5432")

    cursor = conn.cursor()

    cursor.execute("CREATE TABLE IF NOT EXISTS users (id SERIAL PRIMARY KEY)")
    cursor.execute("INSERT INTO users (id) VALUES (2)")

    # No need to fetch anything after CREATE TABLE and INSERT

    conn.commit()  # Make sure to commit the transaction

    print("Table 'users' created successfully!")

    cursor.execute("SELECT * FROM users")
    rows = cursor.fetchall()  # Fetch all rows returned by the SELECT query

    print("Rows in 'users' table:")
    for row in rows:
        print(row)
except psycopg2.Error as e:
    print("Error:", e)
finally:
    cursor.close()
    conn.close()
