import sys
sys.setrecursionlimit(1000000)
input = sys.stdin.readline

def dfs(node, group):
    visited[node] = group;

    for i in arr[node]:
        if not visited[i]:
            a = dfs(i, -group)
            if not a:
                return False
        elif visited[i] == visited[node]:
            return False
    return True

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    arr = [[] for _ in range(n+1)]
    visited = [False] * (n+1)
    for i in range(m):
        v, e = map(int, input().split())
        arr[v].append(e)
        arr[e].append(v)

    for i in range(1, n + 1):
        if not visited[i]:
            result = dfs(i, 1)
            if not result:
                break
    print("YES" if result else "NO")
