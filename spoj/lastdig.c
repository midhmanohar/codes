#include <stdio.h>
long long modeexpo(long long a,long long b){
    long long d=1;
    while(b){
        if(b%2){
            d=(d*a)%10;
        }
        b>>1;
        a=(a*a)%10;
    }
    return d;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld",modeexpo(a,b));
    }
    return 0;
}