#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int i;
    int arr[100009];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int count=0;
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=k){
            count+=1;
        }else{
            break;
        }
    }
    cout<<count<<endl;
}
