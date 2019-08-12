#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int index;
        bool arr[n+5] = {false};
        for(int i=0;i<m;i++){
            cin>>index;
            arr[index-1] = true;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(!arr[i]){
                count++;
                if(count%2!=0){
                    cout<<i+1<<" ";
                }
            }
        }
        cout<<"\n";
        count=0;
        for(int i=0;i<n;i++){
            if(!arr[i]){
                count++;
                if(count%2==0){
                    cout<<i+1<<" ";
                }
            }
        }
        cout<<"\n";
    }
}
