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

    int n;
    cin>>n;

    int skill,count[4];

    int arr[4][5001];

    FOR(i,1,n){
        cin>>skill;
        count[skill]++;

        arr[skill][count[skill]] = i;
    }
    
    int team = min(count[1],min(count[2],count[3]));

    cout<<team<<endl;

    FOR(i,1,team){
        cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
    }
    
    return 0;

}
