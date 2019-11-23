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
vi arr;
long long ncr(int n,int r){
    long long int res = 1;
    int i,x=1;
    int mini = fmin(n, (n - r));

    for (i = n;i > mini;i--) {
        res = (res * i) / x;
        x++;
    }
    return res;
}
void solve(int n,int k){
    int elem;
    FOR(i,0,n-1){
        s(elem);
        arr.push_back(elem);
    }
    sort(arr.begin(),arr.end());
    int maxsub=arr[k-1];
    int sub=0;
    FOR(i,0,k-1){
        if(arr[i]==maxsub){
            sub++;
        }
    }
    int num=0;
    FOR(i,0,n-1){
        if(arr[i]==maxsub){
            num++;
        }
        if(arr[i]>maxsub){
            break;
        }
    }
    cout<<ncr(num,sub)<<endl;
}

int main(){

    int n,t;
    s(t);
    while(t--){
        int k;
        s(n);s(k);
        arr.clear();
        solve(n,k);
    }
    
    return 0;

}
