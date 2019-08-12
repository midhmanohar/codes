#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1010];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j,i,key;
    int count = 0;
    for(j=1;j<n;j++){
        key = arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            i-=1;
            count+=1;
        }
        arr[i+1] = key;
    }
    cout<<count<<endl;
}
