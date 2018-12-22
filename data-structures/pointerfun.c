#include<stdio.h>
int main()
{
	char ch[]="good morning";
	char *p;
	for(p=ch;*p!='\0';p++)
	{
		printf("%c",*p);
	}
	return 0;

}
