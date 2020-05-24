N = int(input())
meeting = []

for i in range(N):
    a, b = map(int, input().split())
    meeting.append((a, b))

meeting = sorted(meeting, key = lambda x : x[0])
meeting = sorted(meeting, key = lambda x : x[1])

start = 0
count = 0
for i in meeting:
    if i[0] < start:
        continue
    else:
        count += 1
        start = i[1]
print(count)
