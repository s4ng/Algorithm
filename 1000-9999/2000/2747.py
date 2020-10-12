# 피보나치 수
arr = [0, 1]
N = int(input())
for i in range(2, N+1):
    tmp = arr[i-2] + arr[i-1]
    arr.append(tmp)
print(arr[N])
