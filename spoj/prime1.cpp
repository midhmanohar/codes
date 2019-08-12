#include<bits/stdc++.h>
int main(){
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--){
        scanf("%d%d",&a,&b);
        bool prime[(b-a)+1];
        int i;
        for(i=0;i<(b-a)+2;i++){
            prime[i] = true;
        }
        int p;
        int n = b;
        for(p=2;p*p<=n;p++){
            if(prime[p] == true){
                for(i=p*p;i<=n;i+=p){
                    prime[i] = false;
                }
            }
        }
        for(i=2;i<=n;i++){
            if(prime[i]){
                if(i>=a && i<=b){
                    printf("%d\n",i);
                }
                
            }
        }
        printf("\n");
    }
}
