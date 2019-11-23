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
void solve(int n){
    int a[102],b[102];

    /*R(i,0,n-1){
        b[i] = n-(i+1);
    }*/

    FOR(i,0,n-1){
        s(a[i]);
        b[i]=0;
    }

    int count=0;
    FORD(i,n-2,0){
        if(a[i]!=a[i+1]){
            b[i]+=(n-i)-1;
        }else{
            b[i]=b[i+1];
        }
    }
    FOR(i,0,n-1){
        printf("%d ",b[i]);
    }
    printf("\n");
}
int main(){

    int t;
    cin>>t;

    while(t--){
    
        int n;
        s(n);

        solve(n);
    }
    
    return 0;

}
