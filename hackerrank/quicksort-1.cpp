#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1010];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0;
    int r = n-1;
    int p = arr[l];
    int i = l+1;;
    for(int j=l+1;j<=r;j++){
        if(arr[j]<p){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i+=1;
        }
    }
    int temp = arr[i-1];
    arr[i-1] = arr[l];
    arr[l] = temp;

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
