print("Program execution started...") 

import tkinter as tk
from tkinter import messagebox

class BillingApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Billing Software")
        self.root.geometry("1350x700+0+0")
        self.root.configure(bg="#074463")

        # Variables
        self.customer_name = tk.StringVar()
        self.customer_phone = tk.StringVar()
        self.customer_bill_no = tk.StringVar()
        self.customer_bill_no.set("")

        self.total_cosmetics_price = tk.StringVar()
        self.total_grocery_price = tk.StringVar()
        self.total_others_price = tk.StringVar()

        self.cosmetics_tax = tk.StringVar()
        self.grocery_tax = tk.StringVar()
        self.others_tax = tk.StringVar()

        self.cosmetics_quantity = {"Bath Soap": tk.IntVar(value=0), "Face Cream": tk.IntVar(value=0), 
                                    "Face Wash": tk.IntVar(value=0), "Hair Spray": tk.IntVar(value=0), 
                                    "Body Lotion": tk.IntVar(value=0)}
        self.grocery_quantity = {"Rice": tk.IntVar(value=0), "Food Oil": tk.IntVar(value=0), 
                                  "Daal": tk.IntVar(value=0), "Wheat": tk.IntVar(value=0), 
                                  "Sugar": tk.IntVar(value=0)}
        self.others_quantity = {"Maaza": tk.IntVar(value=0), "Coke": tk.IntVar(value=0), 
                                "Frooti": tk.IntVar(value=0), "Nimkos": tk.IntVar(value=0), 
                                "Biscuits": tk.IntVar(value=0)}

        # Price details
        self.cosmetics_prices = {"Bath Soap": 40, "Face Cream": 120, "Face Wash": 60, 
                                 "Hair Spray": 180, "Body Lotion": 250}
        self.grocery_prices = {"Rice": 50, "Food Oil": 180, "Daal": 100, 
                               "Wheat": 250, "Sugar": 150}
        self.others_prices = {"Maaza": 20, "Coke": 60, "Frooti": 30, 
                              "Nimkos": 20, "Biscuits": 10}

        # Customer Details Frame
        customer_frame = tk.LabelFrame(self.root, text="Customer Details", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        customer_frame.place(x=0, y=0, relwidth=1)

        tk.Label(customer_frame, text="Customer Name", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=0, column=0, padx=20, pady=5)
        tk.Entry(customer_frame, textvariable=self.customer_name, font=("Arial", 12), width=20).grid(row=0, column=1, padx=10, pady=5)

        tk.Label(customer_frame, text="Phone No", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=0, column=2, padx=20, pady=5)
        tk.Entry(customer_frame, textvariable=self.customer_phone, font=("Arial", 12), width=20).grid(row=0, column=3, padx=10, pady=5)

        tk.Label(customer_frame, text="Bill No", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=0, column=4, padx=20, pady=5)
        tk.Entry(customer_frame, textvariable=self.customer_bill_no, font=("Arial", 12), width=20).grid(row=0, column=5, padx=10, pady=5)

        # Cosmetics Frame
        cosmetics_frame = tk.LabelFrame(self.root, text="Cosmetics", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        cosmetics_frame.place(x=5, y=100, width=325, height=380)

        self.create_item_entries(cosmetics_frame, self.cosmetics_quantity, self.cosmetics_prices, 0)

        # Grocery Frame
        grocery_frame = tk.LabelFrame(self.root, text="Grocery", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        grocery_frame.place(x=340, y=100, width=325, height=380)

        self.create_item_entries(grocery_frame, self.grocery_quantity, self.grocery_prices, 0)


        # Others Frame
        others_frame = tk.LabelFrame(self.root, text="Others", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        others_frame.place(x=675, y=100, width=325, height=380)

        self.create_item_entries(others_frame, self.others_quantity, self.others_prices, 0)

        # Bill Area
        bill_frame = tk.LabelFrame(self.root, text="Bill Area", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        bill_frame.place(x=1010, y=100, width=325, height=380)

        tk.Label(bill_frame, text="Welcome to kaushik's Retail", font=("Arial", 12), bg="white").pack(fill=tk.X)
        self.bill_text = tk.Text(bill_frame)
        self.bill_text.pack(fill=tk.BOTH, expand=1)

        # Button Frame
        button_frame = tk.LabelFrame(self.root, text="Bill Menu", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        button_frame.place(x=0, y=485, relwidth=1, height=200)

        tk.Button(button_frame, text="Total", command=self.calculate_total, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=0, padx=20, pady=10)
        tk.Button(button_frame, text="Generate Bill", command=self.generate_bill, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=1, padx=20, pady=10)
        tk.Button(button_frame, text="Clear", command=self.clear_data, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=2, padx=20, pady=10)
        tk.Button(button_frame, text="Exit", command=self.root.quit, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=3, padx=20, pady=10)

        # Show total cosmetics and taxes
        tk.Label(button_frame, text="Total Cosmetics", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=1, column=0, padx=10, pady=10)
        tk.Label(button_frame, textvariable=self.total_cosmetics_price, font=("Arial", 12), bg="#074463", fg="white").grid(row=1, column=1, padx=10, pady=10)
        tk.Label(button_frame, text="Cosmetics Tax", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=2, column=0, padx=10, pady=10)
        tk.Label(button_frame, textvariable=self.cosmetics_tax, font=("Arial", 12), bg="#074463", fg="white").grid(row=2, column=1, padx=10, pady=10)

        # Show total grocery and taxes
        tk.Label(button_frame, text="Total Grocery", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=3, column=0, padx=10, pady=10)
        tk.Label(button_frame, textvariable=self.total_grocery_price, font=("Arial", 12), bg="#074463", fg="white").grid(row=3, column=1, padx=10, pady=10)
        tk.Label(button_frame, text="Grocery Tax", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=4, column=0, padx=10, pady=10)
        tk.Label(button_frame, textvariable=self.grocery_tax, font=("Arial", 12), bg="#074463", fg="white").grid(row=4, column=1, padx=10, pady=10)

        # Show total others and taxes
        tk.Label(button_frame, text="Total Others", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=5, column=0, padx=10, pady=10)
        tk.Label(button_frame, textvariable=self.total_others_price, font=("Arial", 12), bg="#074463", fg="white").grid(row=5, column=1, padx=10, pady=10)
        tk.Label(button_frame, text="Others Tax", font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=6, column=0, padx=10, pady=10)
        tk.Label(button_frame, textvariable=self.others_tax, font=("Arial", 12), bg="#074463", fg="white").grid(row=6, column=1, padx=10, pady=10)

    # Rest of your methods...
    
    def clear_data(self):
        # Clear customer details
        self.customer_name.set("")
        self.customer_phone.set("")
        self.customer_bill_no.set("")  # Reset the bill number to the default value

        # Reset quantities for all categories
        for item in self.cosmetics_quantity:
            self.cosmetics_quantity[item].set(0)
        for item in self.grocery_quantity:
            self.grocery_quantity[item].set(0)
        for item in self.others_quantity:
            self.others_quantity[item].set(0)

        # Clear totals and taxes
        self.total_cosmetics_price.set("")
        self.total_grocery_price.set("")
        self.total_others_price.set("")

        self.cosmetics_tax.set("")
        self.grocery_tax.set("")
        self.others_tax.set("")

        # Clear the bill area
        self.bill_text.delete("1.0", tk.END)

    def create_item_entries(self, frame, quantity_dict, price_dict, start_row):
        for i, item in enumerate(quantity_dict.keys()):
            tk.Label(frame, text=item, font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=start_row + i, column=0, padx=10, pady=5, sticky="w")
            quantity = tk.IntVar(value=0)
            quantity_dict[item] = quantity
            tk.Entry(frame, textvariable=quantity, font=("Arial", 12), width=10).grid(row=start_row + i, column=1, padx=10, pady=5)

    def calculate_total(self):
        cosmetics_total = sum(self.cosmetics_quantity[item].get() * price for item, price in self.cosmetics_prices.items())
        grocery_total = sum(self.grocery_quantity[item].get() * price for item, price in self.grocery_prices.items())
        others_total = sum(self.others_quantity[item].get() * price for item, price in self.others_prices.items())

        self.total_cosmetics_price.set(f"Rs. {cosmetics_total}")
        self.total_grocery_price.set(f"Rs. {grocery_total}")
        self.total_others_price.set(f"Rs. {others_total}")

        cosmetics_tax = round(cosmetics_total * 0.05, 2)
        grocery_tax = round(grocery_total * 0.05, 2)
        others_tax = round(others_total * 0.05, 2)

        self.cosmetics_tax.set(f"Rs. {cosmetics_tax}")
        self.grocery_tax.set(f"Rs. {grocery_tax}")
        self.others_tax.set(f"Rs. {others_tax}")

    def generate_bill(self):
        self.bill_text.delete("1.0", tk.END)
        self.bill_text.insert(tk.END, "\tWelcome to Hanan's Retail\n")
        self.bill_text.insert(tk.END, f"Bill No.: {self.customer_bill_no.get()}\n")
        self.bill_text.insert(tk.END, f"Customer Name: {self.customer_name.get()}\n")
        self.bill_text.insert(tk.END, f"Phone No.: {self.customer_phone.get()}\n")
        self.bill_text.insert(tk.END, "\nProduct\t\tQty\tPrice\n")
        self.bill_text.insert(tk.END, "-" * 30 + "\n")
        
        # Iterate through cosmetics
        for item, quantity in self.cosmetics_quantity.items():
            qty = quantity.get()
            if qty > 0:
                price = qty * self.cosmetics_prices[item]
                self.bill_text.insert(tk.END, f"{item}\t\t{qty}\t{price}\n")
        
        # Iterate through grocery
        for item, quantity in self.grocery_quantity.items():
            qty = quantity.get()
            if qty > 0:
                price = qty * self.grocery_prices[item]
                self.bill_text.insert(tk.END, f"{item}\t\t{qty}\t{price}\n")
        
        # Iterate through others
        for item, quantity in self.others_quantity.items():
            qty = quantity.get()
            if qty > 0:
                price = qty * self.others_prices[item]
                self.bill_text.insert(tk.END, f"{item}\t\t{qty}\t{price}\n")
        
        self.bill_text.insert(tk.END, "-" * 30 + "\n")
        
        # Display totals
        self.bill_text.insert(tk.END, f"Total Cosmetics: {self.total_cosmetics_price.get()}\n")
        self.bill_text.insert(tk.END, f"Total Grocery: {self.total_grocery_price.get()}\n")
        self.bill_text.insert(tk.END, f"Total Others: {self.total_others_price.get()}\n")
        self.bill_text.insert(tk.END, f"Cosmetics Tax: {self.cosmetics_tax.get()}\n")
        self.bill_text.insert(tk.END, f"Grocery Tax: {self.grocery_tax.get()}\n")
        self.bill_text.insert(tk.END, f"Others Tax: {self.others_tax.get()}\n")


# ===== Main Execution =====
if __name__ == "__main__":
    root = tk.Tk()
    app = BillingApp(root)
    root.mainloop()
        
    def clear_data(self):
        # Clear customer details
        self.customer_name.set("")
        self.customer_phone.set("")
        self.customer_bill_no.set("")  # Reset the bill number to the default value

        # Reset quantities for all categories
        for item in self.cosmetics_quantity:
            self.cosmetics_quantity[item].set(0)
        for item in self.grocery_quantity:
            self.grocery_quantity[item].set(0)
        for item in self.others_quantity:
            self.others_quantity[item].set(0)

        # Clear totals and taxes
        self.total_cosmetics_price.set("")
        self.total_grocery_price.set("")
        self.total_others_price.set("")

        self.cosmetics_tax.set("")
        self.grocery_tax.set("")
        self.others_tax.set("")

        # Clear the bill area
        self.bill_text.delete("1.0", tk.END)

    def create_item_entries(self, frame, quantity_dict, price_dict, start_row):
        for i, item in enumerate(quantity_dict.keys()):
            tk.Label(frame, text=item, font=("Arial", 12, "bold"), bg="#074463", fg="white").grid(row=start_row + i, column=0, padx=10, pady=5, sticky="w")
            quantity = tk.IntVar(value=0)
            quantity_dict[item] = quantity
            tk.Entry(frame, textvariable=quantity, font=("Arial", 12), width=10).grid(row=start_row + i, column=1, padx=10, pady=5)

    def calculate_total(self):
        cosmetics_total = sum(self.cosmetics_quantity[item].get() * price for item, price in self.cosmetics_prices.items())
        grocery_total = sum(self.grocery_quantity[item].get() * price for item, price in self.grocery_prices.items())
        others_total = sum(self.others_quantity[item].get() * price for item, price in self.others_prices.items())

        self.total_cosmetics_price.set(f"Rs. {cosmetics_total}")
        self.total_grocery_price.set(f"Rs. {grocery_total}")
        self.total_others_price.set(f"Rs. {others_total}")

        cosmetics_tax = round(cosmetics_total * 0.05, 2)
        grocery_tax = round(grocery_total * 0.05, 2)
        others_tax = round(others_total * 0.05, 2)

        self.cosmetics_tax.set(f"Rs. {cosmetics_tax}")
        self.grocery_tax.set(f"Rs. {grocery_tax}")
        self.others_tax.set(f"Rs. {others_tax}")

    def generate_bill(self):
        self.bill_text.delete("1.0", tk.END)
        self.bill_text.insert(tk.END, "\tWelcome to Kaushik's Retail\n")
        self.bill_text.insert(tk.END, f"Bill No.: {self.customer_bill_no.get()}\n")
        self.bill_text.insert(tk.END, f"Customer Name: {self.customer_name.get()}\n")
        self.bill_text.insert(tk.END, f"Phone No.: {self.customer_phone.get()}\n")
        self.bill_text.insert(tk.END, "\nProduct\t\tQty\tPrice\n")
        self.bill_text.insert(tk.END, "-" * 30 + "\n")
        
        # Iterate through cosmetics
        for item, quantity in self.cosmetics_quantity.items():
            qty = quantity.get()
            if qty > 0:
                price = qty * self.cosmetics_prices[item]
                self.bill_text.insert(tk.END, f"{item}\t\t{qty}\t{price}\n")
        
        # Iterate through grocery
        for item, quantity in self.grocery_quantity.items():
            qty = quantity.get()
            if qty > 0:
                price = qty * self.grocery_prices[item]
                self.bill_text.insert(tk.END, f"{item}\t\t{qty}\t{price}\n")
        
        # Iterate through others
        for item, quantity in self.others_quantity.items():
            qty = quantity.get()
            if qty > 0:
                price = qty * self.others_prices[item]
                self.bill_text.insert(tk.END, f"{item}\t\t{qty}\t{price}\n")
        
        self.bill_text.insert(tk.END, "-" * 30 + "\n")
        
        # Display totals
        self.bill_text.insert(tk.END, f"Total Cosmetics: {self.total_cosmetics_price.get()}\n")
        self.bill_text.insert(tk.END, f"Total Grocery: {self.total_grocery_price.get()}\n")
        self.bill_text.insert(tk.END, f"Total Others: {self.total_others_price.get()}\n")
        self.bill_text.insert(tk.END, f"Cosmetics Tax: {self.cosmetics_tax.get()}\n")
        self.bill_text.insert(tk.END, f"Grocery Tax: {self.grocery_tax.get()}\n")
        self.bill_text.insert(tk.END, f"Others Tax: {self.others_tax.get()}\n")


# ===== Main Execution =====
if __name__ == "__main__":
    root = tk.Tk()
    app = BillingApp(root)
    root.mainloop()
