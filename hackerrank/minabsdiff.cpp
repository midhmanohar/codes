#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100009];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=1000000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<min){
                min=abs(arr[i]-arr[j]);
            }
        }
    }
    cout<<min<<endl;
}
