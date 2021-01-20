c = float(input())
ln = int(input())

sum = 0

for x in range(ln):
    w, l = map(float, input().split())
    sum = sum + (w * l * c)

print(format(sum, '.7f'))
