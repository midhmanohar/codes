#include<stdio.h>
#include<time.h>
void swap(int *t,int *p)
{
int temp=*t;
*t=*p;
*p=temp;
}
int partition(int a[],int low,int high)
{
int x=a[high];
int i=low-1,j;
for(j=low;j<high;j++)
{
if(a[j]<=x)
{
i=i+1;
swap(&a[i],&a[j]);
}
}
swap(&a[i+1],&a[high]);
return i+1;
}
void quick_sort(int a[],int low,int high)
{
if(low<=high)
{
int loc=partition(a,low,high);
quick_sort(a,low,loc-1);
quick_sort(a,loc+1,high);
}
}
int main()
{
int a[30],n,start,end,i;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
start=clock();
quick_sort(a,0,n-1);
end=clock();
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
printf("Time taken: %lf \n",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}
