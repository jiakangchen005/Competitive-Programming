x, y, n = map(int, input().split())

for z in range(1, n + 1):
    if (z % x == 0):
        if (z % y == 0):
            print("FizzBuzz")
        else:
            print("Fizz")
    elif (z % y == 0):
        print("Buzz")
    else:
        print(str(z))
