# Input

n = int(input())

# Solve

for y in range(n):
	x = int(input())
	if (x % 2 == 0):
		print(str(x) + " is even")
	else:
		print(str(x) + " is odd")
