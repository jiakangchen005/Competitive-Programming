# Input

N , B = map(str, input().split())
N = int(N);
total = 0

for x in range(N * 4):
    y, z = map(str, list(input()))

    if (y == "A"):
        total = total + 11
    elif (y == "K"):
        total = total + 4
    elif (y == "Q") :
        total = total + 3
    if (y == "J") and (z == B):
        total = total + 20
    elif (y == "J"):
        total = total + 2
    elif (y == "T"):
        total = total + 10
    elif (y == "9") and (z == B):
        total = total + 14

print(total)
