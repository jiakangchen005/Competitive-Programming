# Input

l = int(input())
d = int(input())
x = int(input())

# Solve

def sum_digits(z):
    return sum(map(int, str(z)))

n = 0
m = 0

for y in range(l, d + 1):
    if (sum_digits(y) == x):
        n = y
        break

for y in range(d, l - 1, -1):
    if (sum_digits(y) == x):
        m = y
        break

print(n)
print(m)
