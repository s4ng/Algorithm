// 스택 수열
n = int(input())
count = 1
stack = []
result = []
isRight = True
for i in range(n):
    num = int(input())
    while count <= num:
        stack.append(count)
        count+=1
        result.append('+')
    if stack[-1] == num:
        stack.pop()
        result.append('-')
    else:
        isRight = False
        break

if isRight == True:
    for i in result:
        print(i)
else:
    print("NO")
