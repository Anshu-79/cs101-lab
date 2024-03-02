
#inputting number as a string
num = input("Enter number: ")

sum = 0

for ch in num:
    sum += int(ch)
# typecasting every character into an integer and adding it to sum

print(sum)