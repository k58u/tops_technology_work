# How Do You Check The Presence Of A Key In A Dictionary?
'''
You can check the presence of a key in a dictionary in Python using the 'in' operator the get() method. 
'''
my_dict = {'language': 'python', 'name': 'kaushik'}
if 'name' in my_dict:
    print("Key 'name' is present in the dictionary.")
else:
    print("Key 'name' is not present in the dictionary.")
