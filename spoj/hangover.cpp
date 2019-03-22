#include <stdio.h>
int main(){
    float n,sum;
    int i;
    int count;
    while(true){
        scanf("%f",&n);
        if(n==0){
            return 0;
        }
        sum = 0;
        count=0;
        for(i=2;i<300;i++){
            sum+=(1.0/i);
            count+=1;
            if(sum>=n){
                break;
            }
        }
        printf("%d card(s)\n",count);

    }
}