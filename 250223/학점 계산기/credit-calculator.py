n = int(input())
point = list(map(float,input().split()))
sum = 0


for i in range(n):
    sum += point[i]
    avr = sum/n

if avr >= 4.0:
    print(f'{avr:.1f}','Perfect',sep="\n" )

elif avr >= 3.0:
     print(f'{avr:.1f}','Good',sep="\n" )

else:
    print(f'{avr:.1f}','Poor',sep="\n" )
