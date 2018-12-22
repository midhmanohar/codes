# your code goes here


n = int(input())
def rev(num):
	return  int(str(num)[::-1])
for i in range(n):
    a, b = map(int, input().split())
    print(rev(rev(a)+rev(b))) 