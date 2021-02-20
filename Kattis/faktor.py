from math import ceil

# Input

a, i = map(int, input().split())

# Solve

temp = 0;

while 1:
    if (ceil(temp / a) == i):
        print(temp)
        break
    temp = temp + 1
