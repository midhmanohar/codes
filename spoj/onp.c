#include <stdio.h>
#include <ctype.h>
#include <string.h>
char stack[20];
int top = -1;
void push(char x){
    stack[++top] = x;
}
char pop(){
    if(top ==  -1){
        return -1;
    }else{
        return stack[top--];
    }
}
void main(){
    char exp[400];
    char x;
    int n,i;
    scanf("%d",&n);
    while(n > 0){
        scanf("%s",exp);
        for(i=0;i<strlen(exp);i++){
            if(isalnum(exp[i])){
                printf("%c",exp[i]);
            }
            else if(exp[i] == ')'){
                x = pop();
                printf("%c",x);
             }
            else if(exp[i] != '('){
                push(exp[i]);
            }
        }
        while(top != -1){
            printf("%c",pop());
        }
        printf("\n");
        n-=1;
    }
}