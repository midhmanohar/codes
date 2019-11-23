#include <bits/stdc++.h>

using namespace std;


#define s(x) scanf("%d", &x)
#define vi vector<int>
#define vll vector<long long>
#define vii vector<vi>
#define sll(x) scanf("%lld", &x)
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
typedef long long ll;


/////////////////////////////////////////////////////////////////////

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        s(n);
        int arr[150009];
        REP(i,n){
            s(arr[i]);
        }

        int count = 0 ;
        
        int minElem = 1e9;

        for(int i=n-1;i>=0;i--){
            if(arr[i]>minElem){
                count++;
            }
            
            minElem = min(arr[i],minElem); 
        }

        cout<<count<<endl;


    }
    
    return 0;

}
