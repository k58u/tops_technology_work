from manager import manager_menu, add_fruit_operations, view_inventory, update_fruit
from customer import customer_menu

def display_role_menu():
    """Display role selection menu."""
    print("WELCOME TO FRUIT MART")
    print("1) Manager")
    print("2) Customer")
    print("3) Exit")
    role = input("Select your Role: ")
    return role

def main():
    """Main function to run the Fruit Mart application."""
    while True:
        role = display_role_menu()  # Role selection: Manager or Customer

        if role == '1':  # Manager Role
            while True:
                choice = manager_menu()  # Display Manager menu

                if choice == '1':  # Add Fruit Stock
                    add_fruit_operations()

                elif choice == '2':  # View Fruit Stock
                    print(view_inventory())

                elif choice == '3':  # Update Fruit Stock
                    fruit_name = input("Enter the fruit name to update: ").capitalize()
                    while True:
                        try:
                            qty = int(input("Enter the new quantity (in kg): "))
                            price = float(input("Enter the new price (for 1 kg): "))
                            break
                        except ValueError:
                            print("Invalid input. Please enter valid numbers for quantity and price.")
                    
                    result = update_fruit(fruit_name, qty, price)
                    print(result)

                elif choice == '4':  # Back to Role Selection
                    break

                else:
                    print("Invalid choice, please try again.")

        elif role == '2':  # Customer Role
            while True:
                choice = customer_menu()  # Display Customer menu

                if choice == '1':  # View Fruit Stock
                    print(view_inventory())

                elif choice == '2':  # Back to Role Selection
                    break

                else:
                    print("Invalid choice, please try again.")

        elif role == '3':  # Exit
            print("Thank you for using Fruit Mart. Goodbye!")
            break

        else:
            print("Invalid role choice, please select 1, 2, or 3.")

if __name__ == "__main__":
    main()
