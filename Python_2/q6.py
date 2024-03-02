# solving given problem by passing the number as a string
num = input("Enter a number: ")

swappedNum = ''
for i in range(len(num)):
    if i == 0:
        swappedNum += num[-1]
    elif i == len(num) - 1:
        swappedNum += num[0]
    else:
        swappedNum += num[i]

print("Number after swapping first and last digits: ", swappedNum)