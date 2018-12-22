#include<stdio.h>
int main()
{
	int arr[10][10],i,j,min=0,max=0,k;
	int m,n,pos;
	printf("enter size of the array\n");
	scanf("%d%d",&m,&n);
	printf("enter elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=arr[i][0];
		for(j=1;j<n;j++)
		{
			if(arr[i][j]<min)
			{
				min=arr[i][j];
				pos=j;

			}

		}
		max=arr[0][pos];
		for(k=1;k<m;k++)
		{
			if(arr[k][pos]>max)
			{
				max=arr[k][pos];
			}
		}
		if(min==max)
		{
			printf("saddle is %d",min);
		}
	}
}