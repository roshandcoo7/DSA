F = [-1]*10000
def fibonacci(num):
    if num <= 1:
        return num
    if F[num] != -1:
        return F[num]
    F[num] = fibonacci(num-1) + fibonacci(num-2)
    return F[num]
    
print(fibonacci(100))
