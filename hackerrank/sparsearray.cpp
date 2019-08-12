#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> v;
    string elem;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }
    int q;
    cin>>q;
    string query;
    int count ;
    for(int i=0;i<q;i++){
        count = 0;
        cin>>query;
        for(int i=0;i<n;i++){
            if(v[i] == query){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
