#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a=100;
	int b=200;
	printf("before swap,value of a :%d\n",a);
	printf("before swap ,value of b:%d\n",b);

	swap(&a,&b);
	printf("after swap,value of a:%d\n",a);
	printf("after swap,value of b:%d\n",b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}