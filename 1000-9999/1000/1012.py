from collections import deque
dx = (0, 1, 0, -1)
dy = (-1, 0, 1, 0)
t = int(input())
def BFS(x, y, _cnt):
    q = deque()
    q.append((x, y))
    dist[x][y] = _cnt
    
    while q:
        x, y = q.popleft()
        for c in range(4):
            nx, ny = x+dx[c], y+dy[c]
            if 0<=nx<n and 0<=ny<m:
                if arr[nx][ny] and dist[nx][ny] == -1:
                    q.append((nx, ny))
                    dist[nx][ny] = _cnt

for _ in range(t):
    n, m, k = map(int, input().split())
    cnt = 0
    arr = [[0]*m for _ in range(n)] 
    dist = [[-1]*m for _ in range(n)]
    for i in range(k):
        i, j = map(int, input().split())
        arr[i][j] = 1
    
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 1 and dist[i][j] == -1:
                cnt += 1
                BFS(i, j, cnt)
    print(cnt)
