# Better with a visual, click this link.
# https://open.kattis.com/problems/planina


a = int(input())
side = 2

for x in range(a):
    side = side + (side - 1)

print(side * side)
