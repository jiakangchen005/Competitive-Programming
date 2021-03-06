# Input

n = int(input())

# Solve

result = []

for x in range(n):
	result.append(int(input()))

for x in result[::-1]:
	print(x)
