#include<stdio.h>
#include<time.h>
void merge_sort(int a[],int start,int end);
void merge(int a[],int start,int mid,int end);
int b[30];
int main()
{
int start,end;
int a[30],n,i;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
start=clock();
merge_sort(a,0,n-1);
end=clock();
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
printf("Time taken: %lf \n",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}
void merge_sort(int a[],int start,int end)
{
int mid;
if(start<end)
{
mid=(start+end)/2;
merge_sort(a,start,mid);
merge_sort(a,mid+1,end);
merge(a,start,mid,end);
}
}
void merge(int a[],int start,int mid,int end)
{
int l,r,i;
for(l=start,r=mid+1,i=start;l<=mid && r<=end;i++)
{
if(a[l]<=a[r])
b[i]=a[l++];
else
b[i]=a[r++];
}
while(l<=mid)
b[i++]=a[l++];
while(r<=end)
b[i++]=a[r++];
for(i=start;i<=end;i++)
{
a[i]=b[i];
}
}
