#include <bits/stdc++.h>
using namespace std;
int greatest(int num1,int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<greatest(greatest(greatest(a,b),c),d)<<endl;
}
