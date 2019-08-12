#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set <int> s;
    int q;
    int x;
    for(int i=0;i<n;i++){
        cin>>q>>x;
        if(q==1){
            s.insert(x);
        }else if(q==2){
            s.erase(x);
        }else{
            set<int>::iterator it = s.find(x);
            if(it==s.end()){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
}
