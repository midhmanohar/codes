#include<stdio.h>
void reverse(char *);
void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c",*str);
	}
}
int main()
{
	char str[10];
	printf("enter the string\n");
	scanf("%s",str);
	reverse(str);
	return 0;
}