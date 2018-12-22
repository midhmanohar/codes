#include<stdio.h>
void main()
{
int m,n,i,j,a[10][10],b[10][10],r[10][10];
printf("enter the row and column size of matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of first matrix\n");
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
printf("enter the elements of second matrix\n");
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		r[i][j]=a[i][j]+b[i][j];
printf("Resultant matrix is \n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",r[i][j]);
	}
	printf("\n");
}

}
