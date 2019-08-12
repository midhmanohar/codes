#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1010];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=n-2;
    int key = arr[n-1];
    while(i>=0 && arr[i]>key){
        arr[i+1] = arr[i];
        i=i-1;
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    arr[i+1] = key;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
