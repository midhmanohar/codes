#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double start,end,duration;
double l_srch(int a[],int n,int k,int flag);
double b_srch(int a[],int n,int k,int flag);
void analysis();
int main()
{
int ch,a[20],n,i,search;
do
{
printf("1.Linear Search\n2.Binary Search\n3.Analysis\n4.Exit\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter number of elements of array: ");
scanf("%d",&n);
printf("Enter elements of array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to search: ");
scanf("%d",&search);
l_srch(a,n,search,1);
break;
case 2: printf("Enter number of elements of array: ");
scanf("%d",&n);
printf("Enter elements of array in sorted order:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to be searched: ");
scanf("%d",&search);
b_srch(a,n,search,1);
break;
case 3: analysis();
break;
case 4: break;
default:printf("plz enter a valid choice!!!!!!!!!!!!\n");
}
}while(1);
return 0;
}
double l_srch(int a[],int n,int search,int flag)
{
start=clock();
int i,p=0;
for(i=0;i<n;i++)
{
if(a[i]==search)
{
p=1;
if(flag)
printf("element %d found at position %d\n",search,i+1);
break;
}
}if(p==0)
{
printf("element not found!!!!!!!\n");
}
end=clock();
duration=(double)(end-start)/CLOCKS_PER_SEC;
return duration;
}
double b_srch(int a[],int n,int search,int flag)
{
start=clock();
int first=0,last=n-1,mid,f=0;
while(first<=last)
{
mid=(first+last)/2;
if(a[mid]==search)
{
f=1;
}
if(flag)
printf("Element found at position %d\n",t+1);
break;
}
else if(search>a[mid])
first=mid+1;
else
last=mid-1;
}
if(f==0)
printf("Element not found!!!!!!!!!\n");
end=clock();
duration=(double)(end-start)/CLOCKS_PER_SEC;
return duration;
}
void analysis()
{
int b[30];
int n,key;
//double start,end,start1,end1;
double
duration_1,duration_2,duration_3,duration_4,duration_5,duration_6,duration_7,dur
ation_8;
key=b[0];
//searching first element
duration_1=l_srch(b,n,key,0);
duration_2=b_srch(b,n,key,0);
key=b[13]; //searching middle element
duration_3=l_srch(b,n,key,0);
duration_4=b_srch(b,n,key,0);
key=b[24]; //searching end element
duration_5=l_srch(b,n,key,0);
duration_6=b_srch(b,n,key,0);
key=b[17]; //searching any element
duration_7=l_srch(b,n,key,0);
duration_8=b_srch(b,n,key,0);
printf("Searching\t");
printf("Linear Search ");
printf("Binary Search \n");
printf("First Element\t");
printf("%lf\t",duration_1);printf("%lf\n",duration_2);
printf("Last Element\t");
printf("%lf\t",duration_3);
printf("%lf\n",duration_4);
printf("Middle element\t");
printf("%lf\t",duration_5);
printf("%lf\n",duration_6);
printf("Any element\t");
printf("%lf\t",duration_7);
printf("%lf\n",duration_8);
}
