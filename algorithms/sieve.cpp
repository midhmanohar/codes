#include <stdio.h>
#include <cmath>
int main(){
    int n;
    scanf("%d",&n);
    bool primes[n+2];
    int i,j;
    for(i=0;i<=n;i++){
        primes[i]=true;
    }
    primes[0]=false;
    primes[1]=false;
    for(i=2;i<=n;i++){
        if(primes[i]){
            for(j=2;i*j<=n;j++){
                primes[i*j]=false;
            }
        }
    }
    for(i=2;i<=n;i++){
        if(primes[i]){
            printf("%d ",i);
        }
    }
}