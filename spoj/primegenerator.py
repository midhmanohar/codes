n = int(input())
for i in range(n):
    userInput = input().split(' ')
    a = int(userInput[0])
    b = int(userInput[1])
    for j in range(a,b+1):
        flag = True
        if(j<2):
            flag = False
        else:
            for k in range(2,j):
                if(j%k==0):
                    flag=False
        if(flag):
            print(j)
    print()
