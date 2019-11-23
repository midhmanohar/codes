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
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve(int n){
    vi v(n+2,0);
    int x;

    FOR(i,0,n-1){
        cin>>v[i];        
    }
    s(x);
    int left = 0;
    int right = n-1;
    int counta=0,countb=0;
    while(left<right){
        v[right]-=v[left]/x;
        v[left]=v[left]%x;
        if(v[left]==0){
            left+=1;
            counta+=1;
        }else{
            int temp=v[left];
            left+=1;
            v[left]-=temp;
            v[right]-=1;
        }
        if(v[right]==0){
            right-=1;
            countb+=1;
        }
        if(left==right){
            if(counta>countb){
                counta++;
            }else if(countb>counta){
                countb++;
            }else{
                counta++;
            }
        }
    }

    cout<<counta<<" "<<countb<<endl;
}
int main(){
    FAST;
    int t;

    cin>>t;

    while(t--){
    
        int n;
        s(n);

        solve(n);
    }
    
    return 0;

}
