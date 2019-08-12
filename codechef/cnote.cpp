#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i;
    bool flag = false;
    int p[110000];
    int c[110000];
    while(t--){
        int x,y,n,k;
        flag =0;
        cin>>x>>y>>n>>k;
        for(i=0;i<n;i++){
            cin>>p[i]>>c[i];
        }
        for(i=0;i<n;i++){
            if(p[i]>=(x-y) && c[i] <=k ){
                flag = true;
                break;
            }
        }
        cout<<(flag?"LuckyChef":"UnluckyChef")<<' ';
     }
}
