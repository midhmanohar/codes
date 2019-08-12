#include <bits/stdc++.h>
using namespace std;
int main(){
    //ifstream myfile;
    //myfile.open("input.txt");
    int n,m;
    //myfile >> n;
    //cin>>n;
    scanf("%d",&n);
    vector <long> v (n+2,0);
    //myfile >> m;
    //cin>>m;
    scanf("%d",&m);
    int a,b,k;
    for(int i=0;i<m;i++){
        //cin>>a>>b>>k;
        scanf("%d%d%d",&a,&b,&k);
        //myfile>>a>>b>>k;
        v[a]+=k;
        if(b+1<=n){
            v[b+1]-=k;
        }
    }
    long max = 0;
    long x = 0;
    for(int i=1;i<=n;i++){
       x+=v[i];
       //cout<<x<<" ";
       if(max<x){
            max = x;
        }
    }
    cout<<max<<endl;

}
