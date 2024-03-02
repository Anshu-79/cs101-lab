import math

num = int(input("Enter a number: "))

digits = int(math.log10(num)) + 1

print("Number of digits in", num, "=", digits)