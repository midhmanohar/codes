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
        int arr[10];
        REP(i,6){
            s(arr[i]);
        }
        vector < pair <int,int> > v;

        REP(i,3){
            v.push_back(make_pair(arr[i],arr[i+3]));
        }

        sort(v.begin(),v.end());
        
        bool flag = true;
        while(true){
            if(v[0].first == v[1].first){
                if(v[0].second != v[1].second){
                    flag=false;
                    break;
                }
            }else{
                if(v[0].second>=v[1].second){
                    flag=false;
                    break;
                }
            }
            if(v[1].first == v[2].first){
                if(v[1].second != v[2].second){
                    flag=false;
                    break;
                }
            }else{
                if(v[1].second>=v[2].second){
                    flag=false;
                    break;
                }
            }

            break;

        }

        if(flag){
            printf("FAIR\n");
        }else{
            printf("NOT FAIR\n");
        }

    }


    return 0;

}
