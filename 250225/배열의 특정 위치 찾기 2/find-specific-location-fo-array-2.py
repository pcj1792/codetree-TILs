arr = list(map(int,input().split()))

sum_odd = sum(arr[1::2])
sum_even = sum(arr[::2])

if sum_even > sum_odd:
    print(sum_even - sum_odd)

else:
    print(sum_odd - sum_even)