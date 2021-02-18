# Input

n = int(input())
t = list(map(int, input().split()))

# Solve

result = 0
for x in t:
    if (x < 0):
        result = result + 1
print(result)
