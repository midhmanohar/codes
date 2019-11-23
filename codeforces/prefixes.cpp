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

    string s;
    cin>>s;

    int count=0;
    FORD(i,s.size()-2,0){
        if(s[i]==s[i+1]){
            if(s[i+1]=='a'){
                s[i]='b';
            }else{
                s[i]='a';
            }
            count++;
        }
        i--;
    }

    cout<<count<<endl;
    cout<<s<<endl;
    
    return 0;

}
