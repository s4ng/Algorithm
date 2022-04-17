// 큐 2
import sys

n = int(input())
q = []
isEmpty = True
idx = 0
size = 0

order = [list(map(str, sys.stdin.readline().split())) for _ in range(n)]

for i in range(len(order)):

    cmd = order[i][0]

    if cmd == "push":
        q.append(int(order[i][1]))
        size += 1
    elif cmd == "pop":
        if size == 0:
            print(-1)
        else:
            print(q[idx])
            idx += 1         
            size -= 1
    elif cmd == "size":
        print(size)
    elif cmd == "empty":
        if size == 0:
            print(1)
        else:
            print(0)
    elif cmd == "front":
        if size == 0:
            print(-1)
        else:
            print(q[idx])
    else:
        if size == 0:
            print(-1)
        else:
            print(q[-1])
