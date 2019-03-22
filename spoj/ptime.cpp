#include <iostream>
#include <cstdio>
using namespace std;
int a[10002];
int main(){
    int i,j,c,d,n,nn,m=0;
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		nn=j;
	for(i=2;i<=nn;i++)
	{
		if(nn%i==0)
		{
			c=0;
			while(nn%i==0)
			{
				nn=nn/i;
				c++;
			}
			a[i]=a[i]+c;
		}
	}
	}
	for(i=1;i<=10000;i++)
		if(a[i]!=0)
		{
			d=i;
			break;
		}


	printf("%d^%d",i,a[i]);
	for(i=d+1;i<=10000;i++)
	{
		if(a[i]!=0)
			printf(" * %d^%d",i,a[i]);

	}
	return 0;
}