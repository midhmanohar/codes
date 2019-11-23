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

int main(){

    int n;
    cin>>n;
    
    vector <pair<int,int> > v(n);
    
    FOR(i,0,n-1){
        cin>>v[i].first;
        v[i].second = i+1;
    }
    sort(v.rbegin(),v.rend());
    int sum=0;
    FOR(i,0,n-1){
        sum+=(v[i].first*i)+1;
    }
    cout<<sum<<endl;

    FOR(i,0,n-1){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
    return 0;

}
