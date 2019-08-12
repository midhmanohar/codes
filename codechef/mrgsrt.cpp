#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,t,i;
        cin>>s>>t>>i;
        if(i<s){
            printf("%d\n",-1);
            continue;
        }
        int count=0;
        while(!(s==i && t==i)){
            count++;
            printf("%d %d\n",s,t);
            int mid = (s+t)/2;
            if(mid>=i){
                t=mid;
            }else{
                s=mid+1;
            }

        }
        printf("%d %d\n",s,t);
        printf("%d\n",count+1);
    }
}
