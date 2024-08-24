#   Write a Python program to count the frequency of words in a file. 

file = open("example.txt", 'r')
word_freq = {}

for line in file:
    words = line.split()
    for word in words:
        word = word.lower()  
        if word in word_freq:
            word_freq[word] += 1
        else:
            word_freq[word] = 1

file.close()

for word, freq in word_freq.items():
    print(f"{word}: {freq}")