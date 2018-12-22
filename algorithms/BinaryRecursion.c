#include<stdio.h>
int binary(int *,int,int,int,int);
int main()
{
	int array[100],i;
	int n,first,last,middle;
	int search;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	int c;
	c=binary(array,first,last,middle,search);
	if(c==1)
	{
		printf("%d found",search);
	}
	else
	{
		printf("%d not found",search);
	}
}
int binary(int array[],int first,int last,int middle,int search)
{
	int c;
	middle=(first+last)/2;
	if(first<=last)
	{
		if(array[middle]==search)
		{
			c=1;
		}
		else if(array[middle]<search)
		{
			return binary(array,middle+1,last,middle,search);
		}
		else
		{
			return binary(array,first,middle-1,middle,search);
		}
	}
	else
	{
		c=0;
	}
	return c;
}