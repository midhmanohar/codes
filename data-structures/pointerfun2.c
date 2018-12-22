#include<stdio.h>
void ff(int *,int *);
int main()
{

int x=10,y=20;
ff(&x,&y);
printf("%d\n%d",x,y);
return 0;
}
void ff(int *p,int *q)
{
	*p=*p*3;
	*q+=3;
}
