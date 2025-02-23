sum = 0
arr = list(map(int,input().split()))
new = []
average = 0

for i in range(10):
    if arr[i] < 250:
        new.append(arr[i]) 
        sum += new[i]
        average = sum/len(new)
    else:
        break



print(f'{sum} {average:.1f}')
