#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
void fun(){
    int n,i;
    //int c[100005];
    //int h[100005];
    //int frequency[100005];
    //int sum[100005];
     cin>>n;
     vector<int> c(n+1),h(n+1),sum(n+1,0);
        /*for( i=0;i<=100005;i++){
            sum[i] = 0;
        }*/
        for(i=1;i<=n;i++){
            cin>>c[i];
        }
        //int sumvar=0;
        for(i=1;i<=n;i++){
            cin>>h[i];
            //sumvar+=h[i];
        }
        int ini,end;
        for(i=1;i<=n;i++){
            /*if((i+1)-c[i]<0LL){
                ini=0LL;
            }else{
                ini=(i+1LL)-c[i];
            }
            if((i+1LL)+c[i]>n){
                end=n;
            }else{
                end=(i+1LL)+c[i];
            }*/
            ini = max((int)1,i-c[i]);
            end = i+1+c[i];
            sum[ini]++;
            if(end<=n){
                sum[end]--;
            }
        }
        
        //update
        
        for(i=1;i<=n;i++){
            sum[i]+=sum[i-1];
        }
        sort(sum.begin(),sum.end());
        sort(h.begin(),h.end());
        if(h==sum){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        /*
        
        //Bruteforce approach

        for(i=0;i<n;i++){
            if((i+11)-c[i]<0){
                ini=0;
            }else{
                ini = (i+1)-c[i];
            }
            if((i+1)+c[i]>n){
                end=n;
            }else{
                end=(i+1)+c[i];
            }
            for(j=ini;j<end;j++){
                sum[j]+=1;
            }
        }
        for(i=0;i<n;i++){
            sumvar-=sum[i];
        }*/

        /*int flag=0;
        for(i=0;i<n;i++){
            if(sum[i]==h[i]){
                flag = 1;
                continue;
            }
            flag=0;
            break;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }*/
        /*if(sumvar!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }*/
}
signed main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        fun();
    }
    return 0;
}
