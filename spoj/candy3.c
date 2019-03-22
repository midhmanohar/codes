#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long long int n,i,sum,temp;
    while(t--){
        scanf("%lld",&n);
        sum = 0;
        for(i=0;i<n;i++){
            scanf("%lld",&temp);
            sum=(sum+temp)%n;
        }
        if(sum){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}