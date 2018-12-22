#include<stdio.h>
void create(int array[],int size);
int binary(int array[],int first,int last,int item);
//int large(int array[],int size,int largest);
//int string(char *str);
//int fibonacci(int num);
//int power(int a,int b);
int main()
{
	int array[100],size;
	char ch;
	//char *str;
	int choice;
	printf("1.binary search\n2.maximum in a array\n3.reverse a string\n4.fibonacci series\n5.power\nEnter your choice\n");
	scanf("%d",&choice);
	do{

		switch(choice)
		{
			case 1:printf("enter array size\n");
			scanf("%d",&size);
			create(array,size);
			int search;
			printf("enter the item to search\n");
			scanf("%d",&search);
			int check=binary(array,0,size-1,search);
			if(check==0)
			{
				printf("%d not found\n",search);
			}
			else
			{
				printf("%d found at %d\n",search,check+1);
			}
		}
		printf("1.binary search\n2.maximum in a array\n3.reverse a string\n4.fibonacci series\n5.power\n6.Exit\nEnter your choice\n");
		scanf("%d",&choice);
	}while(choice!=6);
}
void create(int array[],int size)
{
	int i;
	printf("enter elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
}
int binary(int array[],int first,int last,int item)
{
	if(first>last)
	{
		return 0;
	}
	int middle=(first+last)/2;
	if(array[middle]==item)
	{
		return middle;
	}
	else if(array[middle]<item)
	{
		return binary(array,middle+1,last,item);
	}
	else
	{
		return binary(array,first,middle-1,item);
	}
}