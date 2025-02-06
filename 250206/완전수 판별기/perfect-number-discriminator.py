n = int(input())
m = 0

for i in range(1,n+1):
    if n % i == 0:
        m += i
if m - n == n:
    print('P')
else:
    print('N')
