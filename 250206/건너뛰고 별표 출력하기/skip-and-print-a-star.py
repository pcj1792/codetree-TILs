n = int(input())

for i in range(n):
    for j in range(i+1):
        print('*', end="")
    
    print()
    print()

for k in range(n):
    for l in range(n-k-1):
        print('*', end='')
    print()
    print()