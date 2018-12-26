#include<stdio.h>
#include<stdlib.h>
int lenght;
void concat(char *str1, char *str2)
{   while(*str1)
str1++;
    while(*str2)
	{*str1 = *str2;
		str1++;
		str2++;}
	*str1 = '\0';}
int reverse(char *str)
{   if(*str)
	{   lenght++;
		reverse(str+1);}
	return lenght;}
int sub_search(char *str, char *sub){
	int cnt = 0;
	int i,j;
	for(i=0;str[i];i++){
		int flag = 1;
		for(j=0;sub[j];j++){
			if(str[i+j]!=sub[j]){
				flag = 0;
				break;}}
		if(flag)
	cnt++;}
	return cnt;}
void main(){
	char str1[100],str2[100];
	int cnt;
	int ch;
	do{
printf("\nmain menu \n\n1. concatanate two strings \n2. length of string \n3.search  for substring  \n4.EXIT\n\nENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		getchar();
    switch(ch){
			case 1 : printf("enter string 1: ");
					 gets( str1);
printf("enter string 2 : ");
					 gets(str2);
					 concat(str1,str2);
					 printf("string 1 + string 2 : %s",str1);
					 break;
case 2 : printf("enter a string : ");
					 gets(str1);
					 lenght=0;
					 printf("length of %d : ",reverse(str1));
					 break;
case 3 : printf("enter string  : ");
					 gets(str1);
					 printf("enter substring to be searched : ");
					 gets(str2);
					 cnt = sub_search(str1,str2);
					 if(cnt)
					 	printf("%s was found in %s %d time(s)",str2,str1,cnt);
					 else
					 	printf("%s not found in %s",str2,str1);
					 break;}

	}while(ch!=4);
	getchar();
	getchar();
}
