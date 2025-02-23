input = list(map(int,input().split()))
cnt = 0
sum = 0
for i in input:
    if i == 0:
        break
    sum += i
    cnt += 1
    avr = sum / cnt

print(f'{sum} {avr:.1f}')
