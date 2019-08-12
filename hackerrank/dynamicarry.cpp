#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int type;
    int x,y;
    int lastAnswer = 0;
    vector<int> v[n];
    while(q--){
        cin>>type;
        cin>>x>>y;
        int seq = (x^lastAnswer)%n;
        if(type==1){
            v[seq].push_back(y);
        }
        if(type==2){
            
            lastAnswer = v[seq][y%(v[seq].size())];
            cout<<lastAnswer<<endl;
        }
    }
}
