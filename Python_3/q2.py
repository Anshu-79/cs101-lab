
# using the *args keyword, we can input a variable number of arguments into the function
def max_age(*args):
    maxage = args[0]
    for age in args:
        if age > maxage:
            maxage = age
    print(maxage)

max_age(56,78,13)