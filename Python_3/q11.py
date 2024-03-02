
# given problem resembles the Fibonacci sequence

n = int(input("Enter a number: "))

def fibonacci(n):
	if n<=1:
		return n
	else:
		return(fibonacci(n-1) + fibonacci(n-2))

fibo_seq = []

for i in range(n):
	fibo_seq.append(fibonacci(i))

print("Sequence:", fibo_seq)
print("Total:", sum(fibo_seq))
