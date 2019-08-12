#include <bits/stdc++.h>
using namespace std;
int main(){
    //ifstream myfile;
    //myfile.open("inputstack1.txt");
    stack <int> s;
    int n;
    cin>>n;
    //myfile>>n;
    string str;
    while(n--){
        while(!s.empty()){
            s.pop();
        }
        if(s.empty()){
            cin>>str;
            //getline(myfile,str);
        }
        if(str.length()==0){
            continue;
        }
        int i;
        for(i=0;i<str.size();i++){
            if(str[i]=='{'){
                s.push(1);
            }
            if(str[i]=='('){
                s.push(2);
            }
            if(str[i]=='['){
                s.push(3);
            }
            if(str[i]=='}'){
                if(s.empty()){
                    cout<<"NO"<<endl;
                    break;
                }
                if(s.top()==1){
                    s.pop();
                }else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(str[i]==')'){
                if(s.empty()){
                    cout<<"NO"<<endl;
                    break;
                }
                if(s.top()==2){
                    s.pop();
                }else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(str[i]==']'){
                if(s.empty()){
                    cout<<"NO"<<endl;
                    break;
                }
                if(s.top()==3){
                    s.pop();
                }else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(i>=str.size()){
            cout<<"YES"<<endl;
        }
    }
}
