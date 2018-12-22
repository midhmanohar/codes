#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int large(int *,int,int);
int main()
{
	int array[100],largest,i,size;
	time_t t;
	srand((unsigned) time(&t));
	printf("enter the size of the array\n");
	scanf("%d",&size);
	printf("array elements\n");
	for(i=0;i<size;i++)
	{
		array[i]=rand()%size;
		printf("%d\t",array[i]);
	}
	largest=array[0];
	largest=large(array,size-1,largest);
	printf("largest element is %d",largest);
	return 0;
}
int large(int array[],int size,int largest)
{
	if(size==1)
	{
		return largest;
	}
	if(size>-1)
	{
		if(array[size]>largest)
		{
			largest=array[size];
		}
		return large(array,size-1,largest);
	}
	else
	{
		return largest;
	}
}