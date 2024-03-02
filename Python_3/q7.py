
def switch_vals(a,b):
    print(f"Input: a = {a}, b ={b}")
    
    a = a ^ b
    b = a ^ b
    a = a ^ b
    
    print(f"Output: a = {a}, b ={b}")
    
switch_vals(4,2)