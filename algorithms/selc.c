#include<stdio.h>
int main()
{
	int size;
	printf("enter the array size\n");
	scanf("%d",&size);
	int array[size];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int j,position,temp;
	for(i=0;i<(n-1);i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]>array[j+1])
			{
				position=j;
			}
		}
		if(position!=i)
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}

}