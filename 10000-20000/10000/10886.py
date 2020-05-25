# 0 = not cute / 1 = cute
N = int(input())
sum = 0
for i in range(N):
    sum += int(input())

print("Junhee is cute!" if sum > N / 2 else "Junhee is not cute!")
