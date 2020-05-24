# 상근날드
burger = []
drink = []

for i in range(3):
    k = int(input())
    burger.append(k)
for i in range(2):
    k = int(input())
    drink.append(k)
print(min(burger) + min(drink) - 50)
