# TGN
N = int(input())
for i in range(N):
    r, e, c = map(int, input().split())
    a = r + c
    if a < e:
        print("advertise")
    elif a == e:
        print("does not matter")
    else:
        print("do not advertise")
