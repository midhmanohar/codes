#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[50];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n,greater<int>());
    long int sum=0;
    for(i=0;i<n;i++){
        sum+=pow(2.0,i)*arr[i];
    }
    cout<<sum<<endl;
}
