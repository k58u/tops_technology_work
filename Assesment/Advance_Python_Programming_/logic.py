from database import Database

class BillingLogic:
    def __init__(self):
        self.db = Database()

    def add_customer(self, name, phone, bill_no):
        query = "INSERT INTO customers (name, phone, bill_no) VALUES (%s, %s, %s)"
        self.db.execute_query(query, (name, phone, bill_no))

    def fetch_products(self):
        query = "SELECT id, name, category, price FROM products"
        return self.db.fetch_all(query)

    def calculate_totals(self, items):
        total = 0
        for item in items:
            total += item['quantity'] * item['price']
        return total

    def generate_bill(self, customer_details, items):
        bill = f"Bill No: {customer_details['bill_no']}\n"
        bill += f"Customer Name: {customer_details['name']}\n"
        bill += f"Phone: {customer_details['phone']}\n\n"
        bill += "Products:\n"
        total = 0
        for item in items:
            line = f"{item['name']} - {item['quantity']} x {item['price']}\n"
            total += item['quantity'] * item['price']
            bill += line
        bill += f"\nTotal: {total}\n"
        with open(f"{customer_details['bill_no']}.txt", "w") as bill_file:
            bill_file.write(bill)
        return bill
