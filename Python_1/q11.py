
def primeCheck(num):
    if num < 2:
        return 0
    i = 2
    while i*i <= num:
        if num % i == 0:
            return 0
        i += 1
    return 1

n = int(input("Enter a positive number: "))
prime_factors = []

if (n == 1):
    print("1 has no prime factors");

elif (primeCheck(n)):
    print(n, "is itself a prime number.")

else:
    for i in range(2,n):
        if n % i == 0 and primeCheck(i):
            prime_factors.append(i)
    print("The prime factors of", n, "are:", prime_factors)