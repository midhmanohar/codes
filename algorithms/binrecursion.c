#include<stdio.h>
int binary(int array[],int first,int last,int middle,int search)
{
	middle=(first+last)/2;
	if(first<=last)
	{
		if(array[middle]==search)
		{
			int c;
			return c=1;
		}
		else if(array[middle]<search)
		{
			return binary(array,middle-1,last,middle,search);
		}
		else
		{
			return binary(array,first,middle-1,middle,search);
		}
	}
	return 0;
}
int main()
{
	int array[100],n,first,last,middle,i;
	int search;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&search);
	int c=binary(array,first,last,middle,search);
	if(c==1)
	{
		printf("%d found",search);
	}
	else
	{
		printf("%d not found",search);
	}
	
}