# Input

a = input()

# Solve

denominator = len(a)
space = a.count("_")
lower = sum(1 for x in a if x.islower())
upper = sum(1 for x in a if x.isupper())

print(space / denominator)
print(lower / denominator)
print(upper / denominator)
print((denominator - space - lower - upper) / denominator)
