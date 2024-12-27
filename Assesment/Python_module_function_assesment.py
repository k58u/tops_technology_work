# Python_module_function_assesment.py

# Global dictionary to store fruit stock details

fruit_inventory = {}

def log_transaction(transaction_details):
    """Log a transaction to the log file."""
    with open('transactions.log', 'a') as log_file:
        log_file.write(transaction_details + '\n')

def add_fruit(fruit_name, qty, price):
    """Add a new fruit or update the stock of an existing fruit."""
    if fruit_name in fruit_inventory:
        # Update the quantity and price if fruit already exists
        fruit_inventory[fruit_name]['qty'] += qty
        fruit_inventory[fruit_name]['price'] = price  # Updating price
    else:
        # Add new fruit to inventory
        fruit_inventory[fruit_name] = {'qty': qty, 'price': price}
    return f"{fruit_name} added/updated successfully!"

def view_inventory():
    """View the current inventory of fruits."""
    if not fruit_inventory:
        return "No fruits in inventory."
    inventory_details = "\nFruit Inventory:\n"
    for fruit, details in fruit_inventory.items():
        inventory_details += f"{fruit}: Quantity - {details['qty']} kg, Price per kg - {details['price']}\n"
    return inventory_details

def update_fruit(fruit_name, qty, price):
    """Update the stock of an existing fruit."""
    if fruit_name in fruit_inventory:
        fruit_inventory[fruit_name]['qty'] = qty
        fruit_inventory[fruit_name]['price'] = price
        return f"{fruit_name} updated to {qty} kg and price per kg is {price}!"
    else:
        return f"{fruit_name} not found in inventory."

def display_role_menu():
    """Display role selection menu."""
    print("WELCOME TO FRUIT MART")
    print("1) Manager")
    print("2) Customer")
    role = input("Select your Role: ")
    return role

def manager_menu():
    """Display the Fruit Market Manager menu."""
    print("\nFRUIT MARKET MANAGER")
    print("1) Add Fruit Stock")
    print("2) View Fruit Stock")
    print("3) Update Fruit Stock")
    choice = input("Enter your choice: ")
    return choice

def customer_menu():
    """Display the Customer menu."""
    print("\nCUSTOMER MENU")
    print("1) View Fruit Stock")
    print("2) Purchase Fruit")
    choice = input("Enter your choice: ")
    return choice

def add_fruit_operations():
    """Prompt user to add fruit stock."""
    print("\nADD FRUIT STOCK")
    fruit_name = input("Enter fruit Name: ").capitalize()
    while True:
        try:
            qty = int(input("Enter quantity (in kg): "))
            if qty <= 0:
                print("Quantity must be a positive number. Try again.")
                continue
            price = float(input("Enter price (for 1 kg): "))
            if price <= 0:
                print("Price must be a positive number. Try again.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers for quantity and price.")
    
    # Call the add_fruit function and log the transaction
    result = add_fruit(fruit_name, qty, price)
    log_transaction(f"{result} (Fruit: {fruit_name}, Qty: {qty}, Price: {price})")
    print(result)

def main():
    """Main function to run the Fruit Mart application."""
    while True:
        role = display_role_menu()  # Role selection: Manager or Customer

        if role == '1':  # Manager Role
            while True:
                choice = manager_menu()  # Display Manager menu

                if choice == '1':
                    add_fruit_operations()

                elif choice == '2':
                    print(view_inventory())

                elif choice == '3':
                    fruit_name = input("Enter the fruit name to update: ").capitalize()
                    while True:
                        try:
                            qty = int(input("Enter the new quantity (in kg): "))
                            price = float(input("Enter the new price (for 1 kg): "))
                            break
                        except ValueError:
                            print("Invalid input. Please enter valid numbers for quantity and price.")
                    
                    result = update_fruit(fruit_name, qty, price)
                    log_transaction(f"{result} (Fruit: {fruit_name}, New Qty: {qty}, New Price: {price})")
                    print(result)

                else:
                    print("Invalid choice, please try again.")
                    continue

        elif role == '2':  # Customer Role
            while True:
                choice = customer_menu()  # Display Customer menu

                if choice == '1':
                    print(view_inventory())

                elif choice == '2':
                    print("Feature for purchasing fruits is not implemented yet.")

                else:
                    print("Invalid choice, please try again.")

        else:
            print("Invalid role choice, please select 1 or 2.")
            continue

# Run the application
if __name__ == "__main__":
    main()
