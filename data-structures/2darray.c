#include<stdio.h>
void main()
{
int i,j,m,n,arr[10][10];
printf("enter the size of the array\n");
scanf("%d%d",&m,&n);
printf("enter the elements\n");
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
}

