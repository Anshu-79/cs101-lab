
length = int(input("Enter number of distinct numbers: "))
nums = []

while len(nums) < length:
    n = int(input("Enter number: "))
    if n not in nums and n <= length:
        nums.append(n)
    else:
        print("Invalid input. Try again.")

given_sum = sum(nums)

theo_sum = length * (length+1) // 2

missing_num = theo_sum - given_sum

print("The missing number is", missing_num)