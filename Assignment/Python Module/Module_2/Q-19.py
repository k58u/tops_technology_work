# Write a Python program to find the first appearance of the substring 
# 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the 
# whole 'not'...'poor' substring with 'good'. Return the resulting string. 

string = (input("Enter the string : "))


n_index = string.find('not')
p_index = string.find('poor')

if n_index != -1 and p_index != -1 and n_index < p_index:
    string = string[:n_index] + 'good' + string[p_index+4:]

print(string)
