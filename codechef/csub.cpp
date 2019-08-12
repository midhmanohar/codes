#include <iostream>
#include <string>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long len;
        cin>>len;
        string s;
        cin>>s;
        long count =0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                count++;
            }            
        }
        count = (count*(count+1))/2;
        printf("%ld\n",count);
    }
}
