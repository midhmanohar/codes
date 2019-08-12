#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    scanf("%lld",&t);
    long long n,i;
    long long c[100005LL];
    long long h[100005LL];
    //int frequency[100005];
    long long sum[100005LL];
    while(t--){
        scanf("%lld",&n);
        for( i=0LL;i<=100005LL;i++){
            sum[i] = 0LL;
        }
        for(i=0LL;i<n;i++){
            scanf("%lld",&c[i]);
        }
        //int sumvar=0;
        for(i=0LL;i<n;i++){
            scanf("%lld",&h[i]);
            //sumvar+=h[i];
        }
        int ini,end;
        int j;
        for(i=0LL;i<n;i++){
            if((i+1)-c[i]<0LL){
                ini=0LL;
            }else{
                ini=(i+1LL)-c[i];
            }
            if((i+1LL)+c[i]>n){
                end=n;
            }else{
                end=(i+1LL)+c[i];
            }
            sum[ini]++;
            if(end<n){
                sum[end]--;
            }
        }
        
        //update
        
        for(i=1LL;i<n;i++){
            sum[i]+=sum[i-1LL];
        }

        sort(sum,sum+n);
        sort(h,h+n);
        int flag=1LL;
        for(i=0LL;i<n;i++){
            if(sum[i]!=h[i]){
                flag=0LL;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1LL){
            cout<<"YES"<<endl;
        }

        /*
        
        //Bruteforce approach

        for(i=0;i<n;i++){
            if((i+1)-c[i]<0){
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
}
