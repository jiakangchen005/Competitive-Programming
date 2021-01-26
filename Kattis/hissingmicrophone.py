# Input

a = list(input())
found = False

for x in range(len(a) - 1):
    if (a[x] == "s") and (a[x + 1] == "s"):
        print("hiss")
        found = True
        break

if (found == False):
    print("no hiss")
