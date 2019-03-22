#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    bool prime[n+1];
    int i;
    for(i=0;i<n+2;i++){
        prime[i] = true;
    }
    int p;
    for(p=2;p*p<=n;p++){
        if(prime[p] == true){
            for(i=p*p;i<=n;i+=p){
                prime[i] = false;
            }
        }
    }
    for(i=2;i<=n;i++){
        if(prime[i]){
            printf("%d ",i);
        }
    }
}