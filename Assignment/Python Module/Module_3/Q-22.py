#Write a Python program to check whether an element exists within a tuple.

tuple = (1, 2, 2, 3, 3,  4, 4, 5,5, 5,7,9)

check = 10
if check in tuple:
    print(f"{check} is in the tuple.")
else:
    print(f"{check} is not in the tuple.")