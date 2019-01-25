#include <stdio.h>
#include <math.h>
int main(){
    int t;
    long long int n,sqt;
    scanf("%d",&t);
    int count = 0;
    while(t--){
        scanf("%lld",&n);
        count+=1;
        sqt = sqrtl(n);
        if(sqt*sqt == n){
            printf("Case %d: Yes\n",count);
        }else{
            printf("Case %d: No\n",count);
        }
    }
}