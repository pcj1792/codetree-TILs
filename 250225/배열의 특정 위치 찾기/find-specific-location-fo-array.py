nums = list(map(int,input().split()))
sum3 = 0
cnt = 0

sum2 = sum(nums[1::2])
for i in range(10):
    if (i+1) % 3 == 0:
        sum3 += nums[i]
        cnt += 1

avr3 = sum3 /cnt

print(sum2,f'{avr3:.1f}', sep=" ")