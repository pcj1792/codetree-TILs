arr = list(map(int,input().split()))

cnt_arr = [0] * 7
for i in arr:
    cnt_arr[i] += 1

for i in range(1,7):
    print(f'{i} - {cnt_arr[i]}')