import math
def solve(n,f):
    p = int(math.log(n)/math.log(2))
    index = int(math.pow(2,p))
    res = f[(index%60)-1]
    print(res)


f = [0]*61
f[0]=0
f[1]=1
for i in range(2,61):
    f[i] = (f[i-1]+f[i-2])%10

t=int(input())
while(True):
    if(t==0):
        break
    n=int(input())
    solve(n,f)
    t-=1

