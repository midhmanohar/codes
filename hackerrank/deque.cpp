#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    //ifstream myfile;
    //myfile.open("inputdeque.txt");
    scanf("%d",&t);
   // myfile >> t;
    vector <int> v;
    deque <int> mydeque;
    while(t--){
        int n;
        scanf("%d",&n);
        //myfile >> n;
        int k;
        scanf("%d",&k);
        //myfile >> k;
        int elem;
        v.clear();
        mydeque.clear();
        for(int i=0;i<n;i++){
            scanf("%d",&elem);
            //myfile >> elem;
            v.push_back(elem);
        }
        for(int i=0;i<v.size();i++){
            //remove elements out of window
            if(!mydeque.empty() && mydeque.front() == i-k){
                mydeque.pop_front();
            }
            //deque is in descending order
            while(!mydeque.empty() && v[mydeque.back()]<v[i]){
                mydeque.pop_back();
            }
            //push the current element to the deque
            mydeque.push_back(i);
            if(i>=k-1){
                printf("%d ",v[mydeque.front()]);
            }
        }
        cout<<endl;
    }
}
