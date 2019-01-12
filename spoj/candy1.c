#include <stdio.h>

int main(){
    int n,sum,mean,i,count;
    int arr[10000];
    while(1){
        scanf("%d",&n);
        sum = 0;
        count = 0;
        if(n==-1){
            return 0;
        }
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        if(sum%n == 0){
            mean = sum/n;
            for(i=0;i<n;i++){
                if(arr[i]<mean){
                    count += mean - arr[i];
                }
            }
            printf("%d\n",count);
        }else{
            printf("%d\n",-1);
        }
    }    
}