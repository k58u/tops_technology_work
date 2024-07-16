# Write a Python program to count the occurrences of each word in a 
# given sentence 

sentence = "I am perssuing backend development course from tops tech."
words = sentence.split() 
word_count = {} # i used dictionary to store word

for word in words:
    if word in word_count:
        word_count[word] + 1  
    else:
        word_count[word] = 1  

print(word_count)
