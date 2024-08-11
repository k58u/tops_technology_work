# Write a Python program to count the number of strings where the string 
# length is 2 or more and the first and last character are same from a given 
# list of strings. 

string_list = ['kaushik', 'neel', 'karan', 'abcd', 'python']
count = 0

for s in string_list:
    if len(s) >= 2 and s[0] == s[-1]:
        count += 1

print(f"Number of matching strings: {count}")
