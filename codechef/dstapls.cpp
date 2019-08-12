#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    long long int n,k;
    while(t--){
        scanf("%lld%lld",&n,&k);
        if(k!=0){    
            if(((n/k)%k)==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        /*if(k==1 || k==2){
            printf("NO\n");
            continue;
        }
        if((n/k)<k){
            printf("NO\n");
            continue;
        }
        if(n==k){
            printf("YES\n");
            continue;
        }
        int res1 = log(n)/log(k);
        double res = log(n)/log(k);
        if( res1==res ){
            cout<<"NO"<<endl;
            continue;
        }
        printf("YES\n");*/
        /*long long res;
        if(k!=0){
            res = n/k;
        }
        if(k!=0){
            if(res%k==0){
                printf("NO\n");
            }else{
                printf("YES\n");
            }
        }*/
    }
}
