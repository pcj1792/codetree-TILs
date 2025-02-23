input = list(map(int,input().split()))
sum = 0
cnt = 0

for i in input:
    if i != 0 and i % 2 == 0:
        sum += i
        cnt += 1

print(cnt,sum,sep=" ")