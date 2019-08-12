#include <bits/stdc++.h>
using namespace std;
bool visited[10009];
vector <int> v[10009];
int n,m;
void dfs(int s){
    for(int i=0;i<v[s].size();i++){
        if(visited[v[s][i]]==false){
            visited[v[s][i]] = true;
            dfs(v[s][i]);
        }
    }
}
int main(){
    cin>>n>>m;
    if(m!=n-1){
        cout<<"NO"<<endl;
        exit(0);
    }
    int i;
    int x,y;
    //int cc = 0;
    for(i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        visited[i] = false;
    }
    visited[1]=true;
    dfs(1);
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            cout<<"NO"<<endl;
            exit(0);
            //cc++;
        }
    }
    cout<<"YES"<<endl;
    //cout<<cc<<endl;
}
