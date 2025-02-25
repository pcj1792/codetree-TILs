n = int(input())

arr =[]
for i in range(1, 11):
    if n % 5 != 0:
        arr.append(i * n)

    else:
        arr.append(1*n)
        arr.append(2*n)
        break

for i in arr:
    print(i, end=" ")