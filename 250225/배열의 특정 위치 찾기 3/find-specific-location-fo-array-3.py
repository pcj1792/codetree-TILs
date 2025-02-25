arr = list(map(int,input().split()))
sum_a = 0

for i in arr:
    if i == 0:
        n = arr.index(i)
        sum_a = arr[n-1]+arr[n-2]+arr[n-3]

print(sum_a)