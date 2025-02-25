n = int(input())

arr = [1,n]

while True:
    if arr[-1] < 100:
        arr.append(arr[-1]+arr[-2])

    else:
        # arr.append(arr[-1]+arr[-2])
        break

for i in arr:
    print(i, end=" ")