#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,arr[600000];
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        if(n==2){
            if(arr[0]>arr[1]){
                swap(arr[0],arr[1]);
            }
        }else{
            sort(arr,arr+n);
            for(int i=1;i<n-1;i+=2){
                   swap(arr[i],arr[i+1]);
            } 
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        cout<<endl;
    }
}
