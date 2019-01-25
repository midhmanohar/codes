#include <stdio.h>
int main(){
    int t;
    long long int n;
    scanf("%d",&t);
    int count = 0;
    while(t--){
        scanf("%lld",&n);
        count+=1;
        if(n==3){
            printf("Case %d: 2 3\n",count);
        }else{
            if(n&1){
                n--;
            }
            printf("Case %d: %lld %lld\n",count,n/2,n);
        }
    }
}