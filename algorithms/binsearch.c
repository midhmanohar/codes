#include<stdio.h>
void main()
{
int i,n,first,last,middle,ar[100],search;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("enter the value to find\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(ar[middle]<search)
{
first=middle+1;
}
else if(ar[middle]==search)
{
printf("iten found in location %d\n",middle+1);
break;
}
else
{
last=middle-1;
middle=(first+last)/2;
}
}
if(first>last)
{
printf("not found! %d is not present in the list\n",search);
}
}

