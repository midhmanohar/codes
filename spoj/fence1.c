#include <stdio.h>

int main(){
    int l;
    while(1){
        scanf("%d",&l);
        if(l==0){
            return 0;
        }
        printf("%.2f\n",(l*l)/(2*3.14159));
    }    
}