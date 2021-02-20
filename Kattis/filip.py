# Input

a, b = map(int, input().split())

# Solve

def reverse(n):
    result = 0;
    while(n > 0): 
        x = n % 10
        result = result * 10 + x 
        n = n // 10
    return result

a, b = reverse(a), reverse(b)

print(max(a, b))
