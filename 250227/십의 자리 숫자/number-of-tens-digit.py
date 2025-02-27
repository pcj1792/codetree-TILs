arr = list(map(int,input().split()))

cnt_arr = [0]*10
for i in arr:
    if i >= 10 :
        cnt_arr[i//10] += 1
    if i == 0:
        break
        


for i in range(1,len(cnt_arr)):
    print(f'{i} - {cnt_arr[i]}')