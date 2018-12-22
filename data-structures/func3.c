#include<stdio.h>
int add(int a,int b);
void main()
{
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
int result=add(a,b);
printf("%d",result);
}
int add(int a,int b)
{
return a+b;
}

