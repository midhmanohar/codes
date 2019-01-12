#include<stdio.h>
void main()
{
int num,count=0;
printf("Enter the number\n");
scanf("%d",&num);
while(num>0)
{
    count=count+(num&1);
    num=num>>1;
}
printf("Number of 1's is %d\n",count);
}

