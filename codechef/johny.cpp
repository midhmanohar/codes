#include <bits/stdc++.h>
using namespace std;
long arr[200];
int search(long arr[],int low,int high,int x){
    if(low==high){
        if(x==arr[low]){
            return low+1;
        }else{
            return 0;
        }
    }else{
        int mid = (low+high)/2;
        if(x==arr[mid]){
            return mid+1;
        }else if(x<arr[mid]){
            return search(arr,low,mid-1,x);
        }else{
            return search(arr,mid+1,high,x);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int index;
        cin>>index;
        int x = arr[index-1];
        sort(arr,arr+n);
        cout<<search(arr,0,n-1,x)<<"\n";
    }
}
