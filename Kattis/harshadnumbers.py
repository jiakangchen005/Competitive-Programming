# Input

n = int(input())

while (True):
    x = list(map(int, str(n)))
    if (n % int(sum(x)) == 0):
        print(n)
        break
    else:
        n = n + 1
