
n = 4
side = 2*n - 1
start = 0
end = side - 1
pattern = [0]*side

while n != 0:
    for i in range(start, end+1):
        row = [0]*side
        for j in range(start, end+1):
            if (i == start or i == end or j == start or j == end):
                row[j] = n
        pattern[i] = row
                
    start += 1
    end -= 1
    n -= 1

for i in range(side):
    for j in range(side):
        if pattern[i][j] == 0:
            if j - 2 > 0:
                pattern[i][j] = j - side//3
            else:
                pattern[i][j] = side - j - side//2

for row in pattern:
    for num in row:
        print(num, end=' ')
    print()