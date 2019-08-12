#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[200009];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        printf("%lld\n",arr[i]);
    }
}
