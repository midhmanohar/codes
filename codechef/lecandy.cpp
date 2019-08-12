#include <iostream>
using namespace std;
int main(){
    int t;
    long n,c;
    cin>>t;
    int i;
    long sum = 0;
    long arr[10000];
    while(t--){
        sum =0;
        cin>>n>>c;
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(c>=sum){
            cout<<"Yes\n";
        }else{
        cout<<"No\n";
        }
    }
    return 0;
}
