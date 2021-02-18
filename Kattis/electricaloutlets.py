# Input

n = int(input())

# Solve

for x in range(n):
    o = input().split(" ")
    o = [(int(x)) for x in o][1:]

    result = 0
    for y in o:
        result = result + y - 1

    print(result + 1)
