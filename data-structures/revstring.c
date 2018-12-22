#include<stdio.h>
void reverse(char *);
int main()
{
	char str[10];
	printf("enter string\n");
	scanf("%s",str);
	reverse(str);
}
void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c",*str);
	}

}