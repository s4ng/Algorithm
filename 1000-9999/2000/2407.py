# 조합
import math

n, m = list(map(int,input().split()))
print(math.factorial(n) // (math.factorial(n - m) * math.factorial(m)))
