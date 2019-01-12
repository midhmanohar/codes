n = int(input())
flag=0
for i in range(n):
    a, b = map(int, input().split())
    for j in range(a,b):
    	for k in range(2,j/2):
    		if(j%k==0):
    			flag=1
    			break
    		else:
    			flag=0
    	if(flag==0):
    		print(j)