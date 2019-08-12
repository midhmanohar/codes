#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,i;
    cin>>q;
    int n,k;
    int a[1010],b[1010];
    while(q--){
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int flag=1;
        for(i=0;i<n;i++){
            if(a[i]+b[i]<k){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
