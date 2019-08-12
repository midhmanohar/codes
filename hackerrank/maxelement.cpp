#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    //ifstream myfile;
    //myfile.open("inputstack.txt");
    stack <long int> s;
    cin>>q;
    //myfile >> q;
    int type;
    long int y;
    long int x;
    long int max;
    while(q--){
        cin>>type;
        //myfile >> type;
        if(type==1){
            cin>>x;
            //myfile>>x;
            if(s.empty()){
                max=x;
            }
            if(x>max){
                s.push(2*x-max);
                max = x;
                continue;
            }
            s.push(x);
        }
        if(type==2){
            y = s.top();
            if(y>max){
                max = 2*max-y;
            }
            s.pop();
        }
        if(type==3){
            cout<<max<<endl;
        }
    }
}
