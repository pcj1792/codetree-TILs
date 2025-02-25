arr = list(map(int,input().split()))


for i in arr:

    if i % 3 == 0:
        idx = arr.index(i) - 1
        break
        
print(arr[idx])