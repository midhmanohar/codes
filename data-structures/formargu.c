#include<stdio.h>
int a=20;
int sum(int a,int b);
int main()
{
	int a=10;
	int b=20;
	int c;
	printf("value of a in main()=%d\n",a);
	c=sum(a,b);
	printf("value of c in main()=%d",c);
	return 0;
}
int sum(int a,int b)
{
	printf("value of a in sum()=%d",a);
	printf("value of b in sum()=%d",b);
	return a+b;
}    


