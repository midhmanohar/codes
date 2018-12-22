#include<stdio.h>
void swap(int *a,int *b)
{
	*a=*a^*b;
	*b=*b^*a;
	*a=*a^*b;
}
void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int n,array[100];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Array elements are\n");
	display(array,n);
	sort(array,n);
	printf("\nArray elements in ascending order\n");
	display(array,n);
	return 0;
}