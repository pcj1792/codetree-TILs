nums = list(map(int,input().split()))

ood_sum = sum(nums[1::2])
multi_avr = sum([x for x in nums if x % 3 == 0]) / 3

print(ood_sum,f'{multi_avr:.1f}', sep=" ")