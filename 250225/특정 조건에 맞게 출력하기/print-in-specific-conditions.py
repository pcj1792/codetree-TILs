arr = list(map(int,input().split()))

new_arr = []
for i in arr:
    if i != 0:
        if i % 2 == 1:
            new_arr.append(i+3)

        else:
            new_arr.append(i//2)

    else:
        break        

for i in new_arr:
    print(i, end=" ")