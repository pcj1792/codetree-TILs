arr = list(map(int,input().split()))

for i in range(3,11):
    plus_num = arr[-1] + arr[-2]
    if plus_num >= 10:
        arr.append(arr[-1] + arr[-2] - 10)

    else:
        arr.append(arr[-1] + arr[-2])

for i in arr:
    print(i,end=' ')