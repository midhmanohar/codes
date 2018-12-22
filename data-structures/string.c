#include<stdio.h>
void array(int *,int,int);
int main(void)
{
	int arr[2][2];
	printf("enter elements\n");
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	array(arr,2,2);
}
void array(int *arr,int a,int b)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d",*(*(arr+i)+j));
		}
	}
}