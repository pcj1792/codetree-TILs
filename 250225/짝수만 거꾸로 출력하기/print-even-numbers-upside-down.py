import sys
sys.setrecursionlimit(10**9)

n = int(input())

even = []

num = list(map(int,input().split()))
for i in num:
    if i % 2 == 0:
        even.append(i)

even.reverse()
for i in even:
    print(i, end=" ")