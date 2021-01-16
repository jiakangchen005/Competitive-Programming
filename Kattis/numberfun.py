n = int(input())

for x in range(n):
    a, b, c = map(int, input().split())
    if (a / b == c) or (b / a == c):
        print("Possible")
    elif (a - b == c) or (b - a == c):
        print("Possible")
    elif (a + b == c):
        print("Possible")
    elif (a * b == c):
        print("Possible")
    else:
        print("Impossible")
