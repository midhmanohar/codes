#include<stdio.h>
void main()
{
int a,b,n;
char c;
printf("enter a and b\n");
scanf("%d%d",&a,&b);
do
{
printf("swap using \n 1.Arithmetic \n 2.Multi and Div \n 3.Bitwise \n 4.Exit\n");
scanf("%d",&n);
switch(n)
{
case 1:
a=a+b;
b=a-b;
a=a-b;
printf("a=%d \n b=%d \n",a,b);
break;
case 2:
a=a*b;
b=a/b;
a=a/b;
printf("a=%d \n b=%d \n",a,b);
break;
case 3:
a=a^b;
b=a^b;
a=a^b;
printf("a=%d \n b=%d \n",a,b);
break;
case 4:
break;
deafault:
printf("Invalid option\n");
}
printf("Do you want to continue ?(y/n)");
scanf("%c",&c);
}while(c=='y');
}
