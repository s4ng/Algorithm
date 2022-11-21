import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

n = int(input())
arr = [[] for _ in range(n+1)]

for _ in range(n-1):
    a, b = map(int, input().split())
    arr[a].append(b)
    arr[b].append(a)

visited = [0]*(n+1)

def dfs(s):
    for i in arr[s]:
        if visited[i] == 0:
            visited[i] = s
            dfs(i)

dfs(1)

for i in range(2, n+1):
    print(visited[i])
