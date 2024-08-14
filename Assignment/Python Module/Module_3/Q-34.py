#Write a python script to check if given key already exist in the dictionary

my_dict = {'language': 'python', 'name': 'kaushik'}

check = 'name'

if check in my_dict:
    print(f"Key '{check}' exists in the dictionary.")
else:
    print(f"Key '{check}' does not exist in the dictionary.")
