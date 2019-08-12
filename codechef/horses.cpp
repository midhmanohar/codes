#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    long arr[6000];
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long min = 10000000000;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])<min){
                    min = abs(arr[i]-arr[j]);
                }
            }
        }
        cout<<min<<"\n";
        
    }
}
