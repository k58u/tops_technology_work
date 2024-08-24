# Write a Python program to copy the contents of a file to another file.

source_file = open("example.txt", 'r')

destination_file = open("Copy.txt", 'w')

for line in source_file:
    destination_file.write(line)

source_file.close()
destination_file.close()
