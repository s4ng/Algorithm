import sys
input = sys.stdin.readline

n = int(input())
arr = sorted(map(int, input().split()))

max_val = 2000000001
max_nums = []

l_point = 0
r_point = n - 1
while l_point < r_point:
    now_val = arr[l_point] + arr[r_point]
    if abs(now_val) < abs(max_val):
        max_val = arr[l_point] + arr[r_point]
        max_nums = [arr[l_point], arr[r_point]]
    if now_val < 0:
        l_point += 1
    elif now_val > 0:
        r_point -= 1
    else:
        print(*max_nums)
        sys.exit()
print(*max_nums)
