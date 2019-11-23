#include <bits/stdc++.h>

using namespace std;


#define s(x) scanf("%d", &x)
#define vi vector<int>
#define vll vector<long long>
#define vii vector<vi>
#define vpii vector<pair<int,int> >
#define sll(x) scanf("%lld", &x)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
typedef long long ll;


/////////////////////////////////////////////////////////////////////

int main(){

    int n,k;
    cin>>n>>k;

    vi v(n+2);
    FOR(i,0,n-1){
        cin>>v[i];
    }
    
    sort(v.rbegin(),v.rend());


    int count=0;
    FOR(i,0,n-1){
        if(5-v[i]>=k){
            break;
        }
        count++;
    }

    cout<<(n-count)/3<<endl;
    return 0;

}
