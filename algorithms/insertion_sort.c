#include <stdio.h>
int main(){
    int arr[100],i,j;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    for(i=1;i<5;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}