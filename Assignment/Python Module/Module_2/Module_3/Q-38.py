#Write a Python program to check multiple keys exists in a dictionary.

my_dict = {'language': 'python', 'name': 'kaushik','city':'surat'}

check = ['name', 'city','language']

if all(key in my_dict for key in check):
    print("All keys exist in the dictionary.")
else:
    print("Not all keys exist in the dictionary.")
