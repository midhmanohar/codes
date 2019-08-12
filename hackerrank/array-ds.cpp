#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> arr){
    vector<int> dup;
    int i;
    for(i=arr.size()-1;i>=0;i--){
        dup.push_back(arr[i]);
    }
    return dup;
}

int main(){
    int n;
    cin>>n;
    int item;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>item;
        arr.push_back(item);
    }/*
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
    vector<int> newArray = reverseArray(arr);
    for(int i=0;i<newArray.size();i++){ 
        cout<<newArray[i]<<" ";
    }
    cout<<endl;
}
