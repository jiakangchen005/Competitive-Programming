import math

T = int(input())

for x in range(T):
    n = int(input())
    print(str(math.factorial(n) % 10))
