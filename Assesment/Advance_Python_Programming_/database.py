import mysql.connector

class Database:
    def __init__(self):
        self.connection = mysql.connector.connect(
            host="localhost",
            user="billing_user",  # Replace with your MySQL username
            password="billing_password",  # Replace with your MySQL password
            database="billing"
        )
        self.cursor = self.connection.cursor()

    def execute_query(self, query, values=None):
        try:
            self.cursor.execute(query, values)
            self.connection.commit()
        except mysql.connector.Error as error:
            print(f"Error: {error}")

    def fetch_all(self, query, values=None):
        self.cursor.execute(query, values)
        return self.cursor.fetchall()

    def close_connection(self):
        self.cursor.close()
        self.connection.close()
