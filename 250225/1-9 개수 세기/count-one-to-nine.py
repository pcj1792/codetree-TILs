n = int(input())
arr = list(map(int,input().split()))

cnt_arr=[0] * 10

for i in arr:
    cnt_arr[i] += 1 

for i in range(1,10):
    print(cnt_arr[i])