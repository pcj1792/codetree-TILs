n = int(input())

for i in range(n):
    for i in range(n-i):
        print("*", end=' ')
    print()

for k in range(1,n):
    for l in range(k+1):
        print('*', end=" ")
    print()