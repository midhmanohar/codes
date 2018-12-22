#include<stdio.h>
int max(int num1,int num2);
int main()
{
	int a,b;
	int res;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	res=max(a,b);
	printf("maximum value is %d\n",res);
	return 0;
}
int max(int num1,int num2)
{
	int result;
	if(num1>num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}