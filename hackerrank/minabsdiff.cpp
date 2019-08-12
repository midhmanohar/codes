#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100009];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }/*
    int min=1000000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<min){
                min=abs(arr[i]-arr[j]);
            }
        }
    }*/
    sort(arr,arr+n);
    int diff;
    int min = abs(arr[1]-arr[0]);
    for(i=2;i<n;i++){
        diff = abs(arr[i]-arr[i-1]);
        if(diff<min){
            min = diff;
        }
    }
    cout<<min<<endl;
}
