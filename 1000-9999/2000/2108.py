import sys
from collections import Counter
input = sys.stdin.readline

n = int(input())
arr = []

for _ in range(n):
    arr.append(int(input()))

arr.sort()
counter = Counter(arr).most_common()

if n > 1:
    if(counter[1][1] == counter[0][1]):
        mostCommon = counter[1][0]
    else:
        mostCommon = counter[0][0]
else:
    mostCommon = counter[0][0]


print(round(sum(arr) / n))
print(arr[int((n-1) / 2)])
print(mostCommon)
print(arr[-1] - arr[0])
