n = int(input())

for i in range(n):
    for _ in range(i):
        print(" ", end=" ")
    
    for _ in range(2*(n-i)-1):
        print("*", end=" ")
    print()
    
for j in range(n-1):
    for _ in range(n-2*j):
        print(" ", end="")

    for _ in range(2*j+3):
        print("*", end=" ")
    print()
