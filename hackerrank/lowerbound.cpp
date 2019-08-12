#include <bits/stdc++.h>
using namespace std;
/*int search(vector <long> v,int low,int high,long  x){
    if(low==high){
        if(x == v[low]){
            return low;
        }else{
            return -1;
        }
    }else{
        int mid = (low+high)/2;
        if(x == v[mid]){
            return mid;
        }else if(x< v[mid]){
            return search(v,low,mid-1,x);
        }else{
            return search(v,mid+1,high,x);
        }
    }
}*/
int main(){
    int n;
    cin>>n;
    vector <int> v;
    int elem;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(elem);
    }
    int q;
    cin>>q;
    int y;
    int check = -1;
    while(q--){
        cin>>y;
        /*check = search(v,0,n-1,y);
        if(check>=0){
            cout<<"Yes "<<check+1<<endl;
        }*//*
        if(check == -1){
            it = lower_bound(v.begin(),v.end(),y);
            cout<<"No "<<check<<endl;
        }*/
        vector <int>::iterator low = lower_bound(v.begin(),v.end(),y);
        if(v[low - v.begin()] == y){
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }else{
            cout<<"No "<<(low-v.begin()+1)<<endl;
        }
    }

}
