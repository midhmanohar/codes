#include<stdio.h>
typedef struct student
{
	char name[20];
	int rollno;
	int marks;
}stud;
int main()
{
	stud s1,s2;
	printf("enter your name\n");
	scanf("%[^\n]s",s2.name);
	printf("%s",s2.name);
	printf("\nEnter details of the student\n");
	printf("enter name:\n");
	scanf("%s",s1.name);
	printf("enter roll no:\n");
	scanf("%d",&s1.rollno);
	printf("enter marks:\n");
	scanf("%d",&s1.marks);
	printf("Details are\n");
	printf("Name:%s\nRoll no:%d\nMarks:%d\n",s1.name,s1.rollno,s1.marks);
	return 0;
}