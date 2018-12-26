#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double
start,end,duration_2,duration_1,duration_3,duration_4,duration_5,duration_6;
void printArray(int arr[],int n);
int* readArray(int *arr,int n);
void insertionSort(int arr[],int n);
void swap(int *a,int *b);
void selectionSort(int arr[],int n);
void bubbleSort(int arr[],int n);
void analysis();
void printMenu()
{
int arr[100],choice,n;
do
{
printf("Main Menu: \n");
printf("1) Read Array\n");
printf("2) Bubble Sort\n");
printf("3) Selection Sort\n");
printf("4) Insertion Sort\n");
printf("5) Print Array\n");
printf("6) Analysis\n");
printf("7) Quit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
==> \n");
system("clear");
printf("Enter number of elements in the array
scanf("%d",&n);
readArray(arr,n);
break;
case 2:
bubbleSort(arr,n);
break;
case 3:
selectionSort(arr,n);
break;
case 4:
insertionSort(arr,n);
break;
case 5:printArray(arr,n);
break;
case 6: analysis(arr,n);
break;
case 7:break;
default: printf("!!!!Wrong Choice!!!!\n");
}
}while(choice!=7);
}
//------------------------------------
void printArray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
getchar();
}
//---------------------------
int * readArray(int *arr,int n){
}
int i;
for(i=0;i<n;i++)
{
printf("\nEnter arr[%d] ==> \n",i);
scanf("%d",(arr+i));
}
return arr;
//--------------------------------------
void insertionSort(int arr[],int n)
{
int i,j,key;
for(j=1;j<n;j++)
{
key=arr[j];
i=j-1;
while(i>=0 && arr[i]>key)
{
arr[i+1]=arr[i];
i--;
}
arr[i+1]=key;}
}
//---------------------------------------
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
//---------------------------------------
void selectionSort(int arr[],int n)
{
int i,j,min_index;
for(i=0;i<n-1;i++)
{
min_index=i;
for(j=i+1;j<n;j++)
if(arr[j]<arr[min_index])
min_index=j;
swap(&arr[min_index],&arr[i]);
}
}
//---------------------------------------
void bubbleSort(int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
if(arr[j]>arr[j+1])
swap(&arr[j],&arr[j+1]);
}
}void analysis()
{
int new_arr[50],n;
printf("!!!!!!!ENTER ARRAY IN SORTED ORDER!!!!!!\n");
printf("Enter number of elements: ");
scanf("%d",&n);
readArray(new_arr,n);
start=clock();
bubbleSort(new_arr,n);
end=clock();
duration_4=(double)(end-start)/CLOCKS_PER_SEC;
start=clock();
insertionSort(new_arr,n);
end=clock();
duration_5=(double)(end-start)/CLOCKS_PER_SEC;
start=clock();
selectionSort(new_arr,n);
end=clock();
duration_6=(double)(end-start)/CLOCKS_PER_SEC;
printf("!!!!!!!ENTER ARRAY IN REVERSE SORTED ORDER!!!!!!\n");
/*printf("Enter number of elements: ");
scanf("%d",&n);*/
readArray(new_arr,n);
start=clock();
bubbleSort(new_arr,n);
end=clock();
duration_1=(double)(end-start)/CLOCKS_PER_SEC;
start=clock();
insertionSort(new_arr,n);
end=clock();
duration_2=(double)(end-start)/CLOCKS_PER_SEC;
start=clock();
selectionSort(new_arr,n);
end=clock();
duration_3=(double)(end-start)/CLOCKS_PER_SEC;
printf("\tARRAY IS ALREADY SORTED \n\n");
printf("SORT
\t");
printf("Time taken\n");
printf("Bubble Sort\t");
printf("%lf\n",duration_1);
printf("Insertion sort ");
printf("%lf\n",duration_2);
printf("Selection Sort ");
printf("%lf\n",duration_3);
printf("\tARRAY REVERSLY SORTED \n\n");
printf("SORT
\t");
printf("Time taken\n");
printf("Bubble Sort\t");
printf("%lf\n",duration_4);
printf("Insertion sort ");
printf("%lf\n",duration_5);
printf("Selection Sort ");
printf("%lf\n",duration_6);
}
//-------------------------------
int main(void)
{
system("clear");
printMenu();
}
