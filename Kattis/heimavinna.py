# Input

a = input().split(";")

# Solve

n = 0

for x in a:
	if ("-" in x):
		y, z = map(int, x.split("-"))
		n = n + z - y + 1
	else:
		n = n + 1
print(n)
