# Input

n, m = map(int , input().split())

# Solve

for x in range(min(n, m) + 1, max(n, m) + 2):
	print(x)
