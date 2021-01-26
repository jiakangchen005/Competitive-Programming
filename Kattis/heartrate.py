# Input

n = int(input())

for x in range(n):
    b, p = map(float, input().split())
    bpm = 60 * b / p
    abpm = 60 / p
    minabpm = bpm - abpm
    maxabpm = bpm + abpm
    print(format(minabpm, '.4f'), end = ' ')
    print(format(bpm, '.4f'), end = ' ')
    print(format(maxabpm, '.4f'))
