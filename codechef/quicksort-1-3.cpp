/* use median-of-3 method to choose pivot element of the array */
#include <iostream>
using namespace std;
long count = 0;
int partition(int arr[],int p,int r){
    count+=(r-p);
    int x,i,j;
    x = arr[p];
    i = p+1;
    int temp;
    for(j=p+1;j<=r;j++){
        if(arr[j]<x){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i+=1;
        }
    }
    temp = arr[i-1];
    arr[i-1] = arr[p];
    arr[p]=temp;
    return i-1;
}
int middleOfThree(int a,int b,int c){
    if((a<b && b<c) || (c<b && b<a)){
        return b;
    }
    else if((b<a && a<c) || (c<a && a<b)){
        return a;
    }
    else{
        return c;
    }
}
void quicksort(int arr[],int p,int r){
    int q;
    if(p<r){
       int middle = (p+r)/2;
       int median = middleOfThree(arr[p],arr[middle],arr[r]);
       int mindex;
       if(median == arr[middle]){
        mindex = middle; 
       }else if(median == arr[p]){
        mindex = p;
       }else{
        mindex = r;
       }
       int temp = arr[mindex];
       arr[mindex] = arr[p];
       arr[p] = temp;
       q = partition(arr,p,r);
       quicksort(arr,p,q-1);
       quicksort(arr,q+1,r);
    }
}
int main(){
    int arr[1000000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p=0;
    int r=n-1;
    quicksort(arr,p,r);
    cout<<count<<"\n\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
