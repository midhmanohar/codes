#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    while(n>0){
        scanf("%d%d",&a,&b);
        if(a == b || b == a-2){
            if(a%2==0 && b%2==0){
                printf("%d\n",a+b);
            }
            if(a%2!=0 && b!=0){
                printf("%d\n",a+b-1);
            }
        }else{
            printf("No Number\n");
        }
        n-=1;
    }
 
}