#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int array[SIZE];
int top1=-1;
int top2=SIZE;
void push1(int data)
{
	if(top1<top2-1)
	{
	top1+=1;
	array[top1]=data;
	}
	else
	{
	printf("stack overflow\n");
	}
}
void push2(int data)
{
	if(top1<top2-1)
	{
	top2-=1;
	array[top2]=data;
	}
	else
	{
	printf("stack  overflow");
	}
}
void pop1()
{
	if(top1>=0)
	{
	printf("%d popped",array[top1--]);
	}
	else
	{
	printf("stack  underflow\n");
	}
}
void pop2()
{
	if(top2<SIZE)
	{
	printf("%d popped",array[top2++]);
	}
	else
	{
	printf("stack underflow\n");
	}
}
void print1()
{
	int i;
	for(i=top1;i>=0;i--)
	{
	printf("%d\n",array[i]);
	}
}
void print2()
{
	int i;
	for(i=top2;i<SIZE;i++)
	{
	printf("%d\n",array[i]);
	}
}
int main()
{
	int choice;
	int data;
	while(1)
	{
	printf("\n1.Push to 1st stack\n2.Push to 2nd stack\n3.Pop from 1st stack\n4.Pop from 2nd stack\n5.Display stack1\n6.Display stack2\n Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:printf("enter data to be pushed\n");
	scanf("%d",&data);
	push1(data);
	break;
	case 2:printf("enter data to be pushed\n");
	scanf("%d",&data);
	push2(data);
	break;
	case 3:pop1();
	break;
	case 4:pop2();
	break;
	case 5:print1();
	break;
	case 6:print2();
	break;
		}	
	}
}





