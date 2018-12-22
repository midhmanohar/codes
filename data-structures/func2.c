#include<stdio.h>
void read_array(int array[],int n);
int minimum(int values[],int n,int *pos);
void display(int array[],int n);
int *delete_min(int array[],int n,int position);
void insert_element(int array[],int element,int pos);

void main()
{
	int array[100],new_array[100],n,i,pos,j;
	printf("enter number of elements in the input array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	read_array(array,n);
	display(array,n);
	for(i=0;i<n;i++)
	{
		j=minimum(array,n-i,&pos);
		insert_element(new_array,j,i);
	}
	display(new_array,n);
}
void read_array(int array[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element[%d]",i);
		scanf("%d",&array[i]);
	}
}

void display(int array[],int n)
{
	int i;
	printf("array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);

	}
	printf("\n");
}
int minimum(int array[],int n,int *position)
{
	int i,min;
	array[0]=min;
	for(i=0;i<n;i++)
	{
		if(array[i]<=min)
		{
			array[i]=min;
			*position=i;
		}
	}
	array=delete_min(array,n,*position);
	return min;
}
int *delete_min(int array[],int n,int position)
{	
	int i;
	for(i=position;i<n;i++)
	{
		array[i]=array[i+1];

	}
	return array;
}
void insert_element(int array[],int element,int pos)
{
	array[pos]=element;
}