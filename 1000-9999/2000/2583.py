import sys
from collections import deque
input = sys.stdin.readline

n, m, k = map(int, input().split())

arr = [[0 for _ in range(m)] for _ in range(n)]
visited = [[0 for _ in range(m)] for _ in range(n)]
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

for _ in range(k):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(y1, y2):
        for j in range(x1, x2):
            arr[i][j] = 1

area = []
for i in range(n):
    for j in range(m):
        if(arr[i][j] != 1 and visited[i][j] != 1):
            size = 1
            q = deque()
            q.append((i, j))
            visited[i][j] = 1
            while q:
                x, y = q.popleft()
                for k in range(4):
                    nx = x + dx[k]
                    ny = y + dy[k]
                    if(nx >= 0 and nx < n and ny >= 0 and ny < m):
                        if(visited[nx][ny] == 0 and arr[nx][ny] == 0):
                            q.append((nx, ny))
                            visited[nx][ny] = 1
                            size += 1
            area.append(size)

print(len(area))
print(*sorted(area))
