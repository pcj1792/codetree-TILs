n =int(input())

for i in range(n):
    for j in range(n):
        if 0 < i <= j and j < n-1:
            print(" ", end=" ")


        else :
            print("*", end=" ")
        
    print()