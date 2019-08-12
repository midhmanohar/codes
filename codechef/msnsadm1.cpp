#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    int n;
    vector <int> v1;
    vector <int> v2;
    while(t--){
        v1.clear();
        v2.clear();
        scanf("%d",&n);
        int elem;
        for(int i=0;i<n;i++){
            scanf("%d",&elem);
            v1.push_back(elem);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&elem);
            v2.push_back(elem);
        }
        int max=0;
        for(int i=0;i<n;i++){
            int res = v1[i]*20-v2[i]*10;
            if(res>max){
                max = res;
            }
        }
        cout<<max<<endl;
    }
}
