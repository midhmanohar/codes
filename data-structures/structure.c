#include<stdio.h>

typedef struct 
{
char house_name[20];
char place[10];
char district[10];
char pincode[10];
}ADDRESS;
typedef struct
{
	char roll_no[10];
	char name[10];
	char semester[10];
	char branch[10];
	int total_marks[10];
	ADDRESS addr;
}STUDENT;
int main()
{
	STUDENT.addr.place='kuth';
	printf("%s",STUDENT.addr.place);
	return 0;
}