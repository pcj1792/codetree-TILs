n = int(input())

for i in range(n):
    for j in range(n-i):
        print('*', end ="")
    
    for _ in range(i):
        print(" ", end=" ")

    for _ in range(n-i):
        print('*', end ="")
    print()
