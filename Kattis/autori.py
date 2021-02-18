# Input

s = input().split("-")

# Solve

result = ""
for x in s:
    result = result + x[:1]
print(result)
