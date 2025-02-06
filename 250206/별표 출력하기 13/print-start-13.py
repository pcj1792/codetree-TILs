n = int(input())

for i in range(n):
    if i % 2 == 0:
        for _ in range(n-(i//2)):
            print('*', end=" ")
    else:    
        for _ in range(i//2+1):
            print('*', end=" ")
    print()

for j in range(n):
    if j % 2 == 0:
        for _ in range(j//2+3):
            print('*', end=" ")
    else:    
        for _ in range(n-j//2-3):
            print('*', end=" ")
    print()