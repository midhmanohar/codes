#include <stdio.h>
int merge(int arr[],int p,int q,int r){
    int larr[10],rarr[10];
    int n1 = q-p+1;
    int n2 = r-q;
    int i,j;
    int inversion = 0;
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
            inversion += (q-i+1);
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
    return inversion;
}
int mergesort(int arr[],int p,int r){
    int count = 0;
    if(p<r){
        int q = (p+r)/2;
        count+= mergesort(arr,p,q);
        count+= mergesort(arr,q+1,r);
        count+= merge(arr,p,q,r);
    }
    return count;
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
    int s = 0;
    s = mergesort(arr,p,r);
    printf("%d\n",s);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

/*#include <stdio.h>
#include <stdlib.h>
int merge(int arr[],int temp[],int p,int q,int r){
    int i,j,k;
    i=p;
    j=q;
    k=p;
    int inversion=0;
    while((i<=q-1) && (j<=r)){
        if(arr[i]<= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            inversion+=(q-i);
        }
       
    }
    
    while(i<=q-1){
        temp[k++] = arr[i++];
    }
    while(j<=r){
       temp[k++] = arr[j++];
    }
    for(i=p;i<=r;i++){
        arr[i] = temp[i];
    }
    return inversion;
}
int mergesort(int arr[],int temp[],int p,int r){
    int q;
    int x,y,z;
    if(p<r){
        q = (p+r)/2;
        x = mergesort(arr,temp,p,q);
        y = mergesort(arr,temp,q+1,r);
        z = merge(arr,temp,p,q,r);
    }
    return x+y+z;
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
    int temp[10];
    int p = 0;
    int r = n-1;
    printf("Inversion count: %d \n",mergesort(arr,temp,p,r));
    printf("Sorted array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}*/

