#include <iostream>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long count = 0;
        while(n>=5){
            n/=5;
            count+=n;
        }
        cout<<count<<"\n";
    }
}
