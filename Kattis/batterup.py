# Input

n = int(input())
x = input().split()
total = 0

for y in x:
    y = int(y)
    if (y == -1):
        n = n - 1
    else:
        total = total + y

print(total / n)
