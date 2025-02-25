n = int(input())
cnt = 0

for i in range(n):
    points = list(map(int,input().split()))
    avr = sum(points) /4
    if avr >= 60:
        cnt +=1
        print('pass')
    else:
        print('fail')
print(cnt)



