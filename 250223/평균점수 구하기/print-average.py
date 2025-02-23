point = list(map(float,input().split()))
sum = 0

for i in point:
    sum += i
    avr = sum / int(len(point))

print(avr)