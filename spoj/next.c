#include <stdio.h>
int main(){
    int a,b,c,d;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if((a == b) && (b == c) && (a == 0)){
            return 0;
        }
        else if((b-a == c-b) && (c-a ==2*(b-a))){
            d = b-a;
            printf("AP %d\n",c+d);
        }
        else if((b/a) == (c/b)){
            d = b/a;
            printf("GP %d\n",c*d);
        }
    }
  
}