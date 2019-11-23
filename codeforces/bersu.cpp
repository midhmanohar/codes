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

    vi boy(n);

    FOR(i,0,n-1){
        cin>>boy[i];
    }

    int m;
    cin>>m;

    vector <pair<int,bool> > girl(m);

    FOR(i,0,m-1){
        cin>>girl[i].first;
        girl[i].second = true;

    }

    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    
    int result = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(boy[i]-girl[j].first)<=1 && girl[j].second == true){
                result++;
                girl[j].second = false;
                break;
            }
        }


    }
    
    cout<<result<<endl;

    return 0;

}
