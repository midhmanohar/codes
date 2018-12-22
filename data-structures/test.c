#include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int length=strlen(str);
int i,flag=0;
printf("enter the string\n");
scanf("%s",str);
for(i=0;i<length;i++)
{
if(str[i]==str[length-i-1])
{
flag+=1;
}
}
if(flag==length)
{
printf("%s is palindrome",str);
}
else{
printf("%s is not a palindrome",str);
}
}
