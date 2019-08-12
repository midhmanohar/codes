#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector <int> v[n];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        int elem;
        for(int j=0;j<k;j++){
            cin>>elem;
            v[i].push_back(elem);
        }
    }
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/

    int i,j;
    for(int p=0;p<q;p++){
        cin>>i>>j;
        cout<<v[i][j]<<endl;
    }
    
}
