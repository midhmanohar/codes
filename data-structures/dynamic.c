#include<stdio.h>
#include<stdlib.h>
struct course
{
	char subject[10];
	int marks;
};
int main()
{
	struct course *ptr;
	int i,NoOfrecords;
	printf("enter the no of records\n");
	scanf("%d",&NoOfrecords);
	ptr=(struct course *) malloc(NoOfrecords*sizeof(struct course));
	for(i=0;i<10;i++)
	{
		printf("Enter the name of subject and marks\n");
		scanf("%[^\n]s %d",&(ptr+i).subject,&(ptr+i).marks);
	}
	for(i=0;i<10;i++)
	{
		printf("subject:%s\n marks:%d",(ptr+i).subject,(ptr+i).marks);
	}
}