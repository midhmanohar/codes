#include <stdio.h>
void merge(int arr[],int p,int q,int r){
    int larr[10],rarr[10];
    int n1 = q-p+1;
    int n2 = r-q;
    int i,j;
    for(i=0;i<n1;i++){
        larr[i] = arr[p+i];
    }
    for(j=0;j<n2;j++){
        rarr[j] = arr[q+j+1];
    }
    i=j=0;
    int k=0;
    k=p;
    while(i<n1 && j<n2){
        if(larr[i] <= rarr[j]){
            arr[k] = larr[i];
            i+=1;
        }else{
            arr[k] = rarr[j];
            j+=1;
        }
        k+=1;
    }
    
    while(i<n1){
        arr[k] = larr[i];
        i+=1;
        k+=1;
    }
    while(j<n2){
        arr[k] = rarr[j];
        j+=1;
        k+=1;
    }
}
void mergesort(int arr[],int p,int r){
    if(p<r){
        int q = (p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
int main(){
    int arr[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int p = 0;
    int r = n-1;
    mergesort(arr,p,r);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

