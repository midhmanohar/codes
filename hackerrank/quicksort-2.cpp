#include <bits/stdc++.h>
using namespace std;
int n;
int partition(int arr[],int l,int r){
    int p = arr[l];
    int i=l+1;
    for(int j=l+1;j<=r;j++){
        if(arr[j]<p){
            int temp = arr[j];
            arr[j] =arr[i];
            arr[i] = temp;
            i+=1;
        }
    }
    int temp = arr[l];
    arr[l] = arr[i-1];
    arr[i-1] = temp;
    return i-1;
}
void quicksort(int arr[],int l,int r){
    int q;
    if(l<r){
        q = partition(arr,l,r);
        quicksort(arr,l,q-1);
        quicksort(arr,q+1,r);
        
    }
}
int main(){
    cin>>n;
    int arr[1010];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<2){
        return;
    }
    quicksort(arr,0,n-1);

}
