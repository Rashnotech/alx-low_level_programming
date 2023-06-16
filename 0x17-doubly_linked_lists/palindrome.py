#!/usr/bin/python3

#Find the largest palidrome
fnum = eval(input("Enter the starting value (3-digit number):"))
enum = eval(input("Enter the ending value (3-digit number):"))
l_palindrome = 0

for i in range(fnum, enum + 1):
    for y in range(i, enum + 1):
        product = i * y
        if product > l_palindrome and str(product) == str(product)[::-1]:
            l_palindrome = product

with open('102-result', 'w') as file:
    file.write(str(l_palindrome))
