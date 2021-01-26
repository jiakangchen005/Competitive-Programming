# Input

n = int(input())
a = list(map(int, input().split()))
expenses = 0;

for x in a:
    if (x < 0):
        expenses = expenses + x
print(-1 * expenses)
