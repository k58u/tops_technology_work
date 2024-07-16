# Write a python program to sum of the first n positive integers.

n = int(input("Enter a positive integer (n): "))

sum = n * (n + 1) // 2

print(f"The sum of the first {n} positive integers is: {sum}")

'''
formula of maths : n*(n+1)
                  ---------
                      2
i used // for floor division

'''