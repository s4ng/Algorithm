# 직각삼각형
while True:
    nList = list(map(int, input().split()))
    if(sum(nList) == 0):
        break;

    hypo = max(nList); nList.remove(hypo)
    num = sum(list(map(lambda x : x ** 2, nList)))
    if((hypo ** 2) == num):
        print('right')
    else:
        print('wrong')
