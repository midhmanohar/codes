#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    string s;
    cin>>s;
    stringstream ss(s);
    char ch;
    int elem;
    while(ss>>elem){
        v.push_back(elem);
        ss>>ch;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
