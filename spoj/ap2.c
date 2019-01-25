#include <stdio.h>
int main(){
    long long int f,l,sum,n,d,i,count;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld",&f,&l,&sum);
        n = (sum*2)/(f+l);
        printf("%lld\n",n);
        d = (l-f)/(n-5);
        printf("%lld ",f-(2*d));
        printf("%lld ",f-d);
        printf("%lld ",f);
        count=f;
        for(i=0;i<n-3;i++){
            count+=d;
            printf("%lld ",count);
        }
        printf("\n");
    }
}