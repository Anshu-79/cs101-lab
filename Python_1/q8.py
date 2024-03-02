
r1 = int(input("Enter number of rows of first matrix: "))
c1 = int(input("Enter number of columns of first matrix: "))
r2 = int(input("Enter number of rows of second matrix: "))
c2 = int(input("Enter number of columns of second matrix: "))

if c1 != r2:
    print("Please enter proper dimensions of matrices for multiplication")

else:
    matrix1 = []
    matrix2 = []

    print("\nMatrix 1")
    for i in range(r1):
        row = []
        for j in range(c1):
            print("\nRow:",i+1, "Column:",j+1)
            row.append(int(input("Enter element: ")))
        matrix1.append(row)
    
    print("\nMatrix 2")
    for i in range(r2):
        row = []
        for j in range(c2):
            print("\nRow:",i+1, "Column:",j+1)
            row.append(int(input("Enter element: ")))
        matrix2.append(row)

    prod_matrix = [[0]*c2]*r1
    prod_matrix = []

    for i in range(r1):
        row = []
        for j in range(c2):
            element = 0
            for k in range(r2):
                element += matrix1[i][k] * matrix2[k][j]
            row.append(element)
        prod_matrix.append(row)
    
    print("Product of given matrices:")
    for row in prod_matrix:
        print(row)