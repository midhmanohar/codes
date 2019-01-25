#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i,j,total=0;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            if(i*j<=n){
                total+=1;
            }
        }
    }
    printf("%d\n",total);
}