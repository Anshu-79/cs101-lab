from math import sqrt

print("Quadratic Equation: ax^2 + bx + c = 0\n")
    
a = float(input("Enter a: "))
b = float(input("Enter b: "))
c = float(input("Enter c: "))

disc = b*b - 4*a*c

match (disc > 0):
    case False:
        print("Given quadratic has complex roots.")
    
    case True:
        x1 = (-b - sqrt(disc))/2*a
        x2 = (-b + sqrt(disc))/2*a
        print("The roots of given quadratic are:", x1, "and", x2)

    case _:
        pass
