
sum = 0
for i in range(1,11):
    stmt = "Enter number " + str(i) + ": "
    n = float(input(stmt))
    sum += n

print("Sum of given numbers:", sum)
print("Average of given numbers:", sum/10)
