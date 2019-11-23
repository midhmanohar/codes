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
    
    int n;
    cin>>n;
    long int arr[110];
    int count = 0;
    for(int i=1;i<=n;i++){
        scanf("%ld",&arr[i]);
        if(arr[i]%2==1){
            count+=1;
        } 
    }
    
    count = min(count,n-count);


    cout<<count<<endl;

    
    return 0;

}
