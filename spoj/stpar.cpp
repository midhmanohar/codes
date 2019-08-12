#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    int arr[1010];
    stack <int> s;
    while(true){
      cin>>n;
      if(n==0){
        break;
      }
      while(!s.empty()){
        s.pop();
      }
      int last = 1;
      for(i=0;i<n;i++){
        cin>>arr[i];
      }
      int flag = 1;
      for(i=0;i<n;i++){
        while(!s.empty() && s.top()==last){
            last++;
            s.pop();
        }
        if(arr[i]==last){
            last++;
            continue;
        }
        else if(!s.empty() && s.top()==last){
               s.pop();
               last++;
               continue;
        }else if(!s.empty() && s.top() < arr[i]){
            flag = 0;
            break;
        } 
        else{
            s.push(arr[i]);
        }
      }
      
      if(flag){
        cout<<"yes"<<endl;
      }else{
        cout<<"no"<<endl;
      }
  }

}
