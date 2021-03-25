import math

h, v = map(int, input().split(" "))

result = math.ceil(h / math.sin(math.radians(v)))

print(result)
