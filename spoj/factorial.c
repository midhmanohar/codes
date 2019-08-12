#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num;
    while(n > 0){
        scanf("%d",&num);
        int count = 0;
        while(num >= 5){
            count += num/5;
            num = num/5; 
        }
        printf("%d\n",count);
        n-=1;
    }
}
