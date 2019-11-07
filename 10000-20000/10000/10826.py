// 피보나치 수
n = int(input()) 
def fibonacci(k): 
    x, y = 0, 1 
    for i in range(k): 
        x, y = y, x+y 
    return x 
print("%d" % fibonacci(n))

