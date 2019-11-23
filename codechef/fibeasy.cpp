#include <bits/stdc++.h>

using namespace std;


#define s(x) scanf("%d", &x)
#define vi vector<int>
#define vll vector<long long>
#define vii vector<vi>
#define sll(x) scanf("%lld", &x)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
typedef long long ll;


/////////////////////////////////////////////////////////////////////

ll f[100] = {0};
void solve(long long  n){
    //long long p = (long long)(log(n)/log(2));
    //long long index = (long long )pow(2,p);
    ll check = 1;
    ll index = check;
    while(check*=2){
        if(check>n){
            break;
        }
        index=check;
    }
    index = index%60;
    long long res=f[index];
    cout<<res<<endl;
}

int main(){
    f[1] = 0;
    f[2] = 1;

    for(int i=3;i<=60;i++){
        f[i] = (f[i-1]+f[i-2])%10;
    }
    
    int t;
    s(t);
    long long n;
    while(t--){
        sll(n);
        solve(n);
    }
    
    return 0;
}
