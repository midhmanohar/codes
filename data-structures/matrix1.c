#include<stdio.h>
void main()
{
int i,j,m,n,p,q,k,sum=0;
int first[10][10],second[10][10],product[10][10];
printf("enter the rows and columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of first matrix\n");
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&first[i][j]);
printf("enter the rows and columns of second matrix\n");
scanf("%d%d",&p,&q);
printf("enter the elements of second matrix\n");
for(i=0;i<p;i++)
	for(j=0;j<q;j++)
		scanf("%d",&second[i][j]);
printf("First matrix\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		printf("%d\t",first[i][j]);
	printf("\n");
}
printf("second matrix\n");
for(i=0;i<p;i++){
	for(j=0;j<q;j++)
		printf("%d\t",second[i][j]);
	printf("\n");
}
for(i=0;i<m;i++) {
	for(j=0;j<q;j++) {
		for(k=0;k<p;k++) {
			sum=sum+first[i][k]*second[k][j];
		}
		product[i][j]=sum;
		sum=0;
	}
}
printf("produc of two matrices\n");
for(i=0;i<m;i++){
	for(j=0;j<q;j++)
		printf("%d\t",product[i][j]);
	printf("\n");
}
}

