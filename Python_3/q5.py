
def price_check(lower_end, upper_end, cost):
    if cost <= upper_end:
        print("In Budget")
    else:
        print("Not in Budget")

price_check(1000, 5000, 2500)