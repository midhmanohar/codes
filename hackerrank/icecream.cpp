#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int m,n;
    int arr[10010];
    while(t--){
        cin>>m;
        cin>>n;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int i,j;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]+arr[j]==m){
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
            if(j<n){
              break;
            }
        }
    }
}
