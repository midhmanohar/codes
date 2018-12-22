#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;
}s[10];
int main()
{
	int i;
	printf("Enter the details of students\n");
	for(i=0;i<10;i++)
	{
		s[i].roll=i+1;
		printf("For roll no %d\n",s[i].roll);
		printf("Enter name\n");
		scanf("%[^\n]s",s[i].name);
		printf("Enter marks\n");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<10;i++)
	{
		printf("Roll no:%d\nName:%s\nMarks:%.1f\n\n",s[i].roll,s[i].name,s[i].marks);
	}
	return 0;
}