
# given problem is an application of binary search

def binary_search(arr, num):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = (start+end)//2
        if num < arr[mid]:
            end = mid-1
        elif num > arr[mid]:
            start = mid+1
        else:
            return mid
    else:
        return None

print("Given array:", [21,22,23,25,27,28,30,32,33])
num = int(input("Enter number to search for: "))

index = binary_search([21,22,23,25,27,28,30,32,33], num)

# adding 1 because humans count from 1
print(f"Output: Person with age {num} is at {index+1} position")