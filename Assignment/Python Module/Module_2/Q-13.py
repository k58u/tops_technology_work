# # Write a Python program to count the number of characters (character 
# # frequency) in a string 

string = input("Enter a string: ")

u_ch = ""
empty_dictionary = dict()

for ch in string:
    if ch not in u_ch:
        u_ch += ch
        empty_dictionary.update({ch:string.count(ch)})

print(empty_dictionary)

print(u_ch)