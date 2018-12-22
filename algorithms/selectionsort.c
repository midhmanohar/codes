#include<stdio.h>
int main()
{
	int i,n;
	int array[100];
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		int position=i;
		for(int j=i+1;j<n;j++)
		{
			if(array[position]>array[j])
			{
				position=j;
			}
		}
		if(position!=i)
		{
			int temp=array[position];
			array[position]=array[i];
			array[i]=temp;
		}
	}
	printf("sorted list in ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
}