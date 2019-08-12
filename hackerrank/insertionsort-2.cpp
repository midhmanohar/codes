#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1010];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j,key,i;
    for(j=1;j<n;j++){
        key = arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            i-=1;
        }
        arr[i+1] = key;
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
