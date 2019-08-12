#include <bits/stdc++.h>
using namespace std;
stack <int> s1;
stack <int> s2;
void enqueue(int x){
    s1.push(x);
}
void dequeue(){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    s2.pop();
}
int main(){
    int q;
    cin>>q;
    int type,x;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>x;
            enqueue(x);
        }
        if(type==2){
            dequeue();
        }
        if(type==3){
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            cout<<s2.top()<<endl;
        }
    }
}
