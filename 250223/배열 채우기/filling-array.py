input = list(map(int,input().split()))

if input.count(0):
    index = input.index(0)
    for i in range(len(input),index,-1):
        input.pop(i-1)
        
input.reverse()
for i in range(len(input)):
    print(input[i], end=" ")

