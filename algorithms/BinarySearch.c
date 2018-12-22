#include<stdio.h>
int main()
{
	int first,last,middle,search,n,array[100];
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("enter the element to search\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(array[middle]<search)
		{
			first=middle+1;
			middle=(first+last)/2;
		}
		else if(array[middle]==search)
		{
			printf("%d found at location %d",search,middle+1);
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
		printf("%d not found",search);
	}
	return 0;
}