n = int(input()) 
while(n > 0):
    count = 0
    num = int(input())
    while(num>=5):
        count+=num//5
        num = num//5
    print(count)
    n-=1
