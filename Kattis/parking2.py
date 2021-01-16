t = int(input())

for x in range(t):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    result = abs(a[0] - a[-1])

    for y in range(len(a) - 1):
        result = result + abs(a[y] - a[y + 1])
    print(result)
