# Write a Python function that takes a list of words and returns the length 
# of the longest one. 
list = ["apple", "mango", "lechi", "orange",]

max_len = 0

for word in list:
    current_len = len(word)
    
    if current_len > max_len:
        max_len = current_len  

print("Length of the longest word is:", max_len)