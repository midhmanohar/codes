#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    string x;
    int y;
    int type;
    map <string,int> m;
    map<string,int>::iterator itr;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>x>>y;
            itr = m.find(x);
            if(itr == m.end()){
                m.insert(make_pair(x,y));
            }else{
                m[x]+=y;
                
            }
        }
        if(type==2){
            cin>>x;
            m.erase(x);
        }
        if(type==3){
            cin>>x;
            itr = m.find(x);
            if(itr == m.end()){
                cout<<0<<endl;
            }else{
                cout<<m[x]<<endl;
            }
        }
    }
}
