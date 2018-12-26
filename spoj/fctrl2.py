def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
n = int(input())
while(n > 0):
    num = int(input())
    print(fact(num))
    n-=1