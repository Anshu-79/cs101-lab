
dimen = int(input("Enter dimension of square matrix: "))

matrix = []

# Taking input into the matrix
for i in range(dimen):
    row = []
    for j in range(dimen):
        print("\nRow",i+1,"Column",j+1)
        row.append(int(input("Enter number: ")))
    matrix.append(row)

print("Entered matrix: ")
for row in matrix:
    print(row)

# Transposing the matrix
for i in range(dimen):
    for j in range(i,dimen):
        matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        
print("The matrix after transpose: ")
for row in matrix:
    print(row)
