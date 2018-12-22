#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && (a[j]<a[j-1]))
		{
			swap(a[j],a[j-1]);
			j--;
		}
	}
}
int main()
{
	int array[10],n;
	int i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	sort(array,n);
	printf("Array elements after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}