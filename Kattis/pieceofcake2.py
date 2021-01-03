n, h, v = map(int, input().split())

a = max(h, n - h)
b = max(v, n - v)
result = a * b * 4

print(result)
