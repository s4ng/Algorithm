import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
    m = int(input())
    arr = [input().strip() for _ in range(m)]
    arr.sort()
    flag = True
    for i in range(m-1):
        sz = len(arr[i])
        if arr[i] == arr[i+1][:sz]:
            flag = False
            break
    if flag == True:
        print("YES")
    else:
        print("NO")

