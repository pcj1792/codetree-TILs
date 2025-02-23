input = list(map(int,input().split()))
sum = 0
cnt = 0

for i in input:
    if i % 2 == 0 and i != 0:
        sum += i
        cnt += 1
    if i == 0:
        break

print(cnt,sum,sep=" ")