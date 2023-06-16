#!/usr/bin/python3
# Author: Promise Nwhator
def is_palindrome(n):
    return str(n) == str(n)[::-1]


"""
Get user input for the range of numbers
"""
start = int(input("Enter the starting value (3-digit number): "))
end = int(input("Enter the ending value (3-digit number): "))


largest_palindrome = 0

for i in range(start, end + 1):
    for j in range(i, end + 1):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

"""
Save the result in the file
"""
with open('102-result', 'w') as file:
    file.write(str(largest_palindrome))
