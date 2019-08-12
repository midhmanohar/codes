int#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int low,int high,int x){
    while(low<=high){
        int mid = (low+high)/2;
        if(x==arr[mid]){
            return mid;
        }
        if(x<arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int value;
    cin>>value;
    int n;
    cin>>n;
    int arr[1010];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<search(arr,0,n-1,value)<<endl;
}
