#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[200];
        char user[200];
        cin>>str;
        cin>>user;
        int i;
        int sum =0 ;
        for(i=0;i<n;i++){
            if(str[i]!=user[i] && user[i]!='N'){
                i+=1;
                continue;
            }
            if(str[i]==user[i]){
                sum+=1;
            }
        }
        cout<<sum<<"\n";
    }
}
