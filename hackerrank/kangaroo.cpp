#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    /*if(x2>x1 && v2>v1){
        cout<<"No"<<endl;
        exit(0);
    }
    while(x1<2147483647 && x2<2147483647){
        if(x1==x2){
            cout<<"YES"<<endl;
            exit(0);
        }
        x1+=v1;
        x2+=v2;
    }
    cout<<"NO"<<endl;
    */
    if(x2>x1 && v2>=v1){
        cout<<"NO"<<endl;
        exit(0);
    }
    if((abs(x1-x2))%(abs(v2-v1)) == 0){
        cout<<"YES"<<endl;
        exit(0);
    }else{
        cout<<"NO"<<endl;
        exit(0);
    }
}
