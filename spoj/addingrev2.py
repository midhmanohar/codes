# your code goes here


n = int(input())
sum = 0
revsum = 0
for i in range(n):
    a, b = map(int, input().split())
    A = int(str(a)[::-1])  # reverse
    B = int(str(b)[::-1])  # reverse
    sum = A + B
    revsum = int(str(sum)[::-1])  # reverse
    print(revsum) 