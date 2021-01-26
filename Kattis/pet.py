# Input

position = 0;
score = 0

for x in range(1, 6):
    y = list(map(int, input().split()))
    z = sum(y)
    if (z > score):
        position = x
        score = z

print(str(position) + " " + str(score))
