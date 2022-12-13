import sys
input = sys.stdin.readline

h, w, x, y = map(int, input().split())

arr = []
for _ in range(h + x):
    arr.append(list(map(int, input().split())))

A = [[0] * w for _ in range(h)]

for i in range(h):
    for j in range(w):
        A[i][j] = arr[i][j]

for i in range(x, h):
    for j in range(y, w):
        A[i][j] = arr[i][j] - A[i-x][j-y]

for i in range(len(A)):
    print(*A[i])
