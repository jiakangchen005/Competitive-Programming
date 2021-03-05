# Input

p = int(input())

# Solve

for x in range(p):
	k, n = map(int, input().split())
	candles = 0;
	for y in range(1, n + 1):
		candles = candles + y + 1;
	print(str(k) + " " + str(candles))
