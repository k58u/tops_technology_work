# Write a Python program to get the Fibonacci series of given range. 

num = int(input("Enter the number : "))
t1, t2 = 0, 1

for n in range(num):
    print(t1, end=' ')
    t1, t2 = t2, t1 + t2
