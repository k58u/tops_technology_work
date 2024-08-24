#   Write a python program to find the longest words. 

file = open("example.txt", 'r')

longest_words = []
max_length = 0

for line in file:
    for word in line.split():
        length = len(word)
        if length > max_length:
            longest_words = [word]
            max_length = length
        elif length == max_length:
            longest_words.append(word)

file.close()

print("Longest word(s):", longest_words)