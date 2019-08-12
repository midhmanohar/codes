#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <string> arr2[60];
    int t;
    string arr1[110];
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        int l;
        for(int i=0;i<k;i++){
            cin>>l;
            for(int m=0;m<l;m++){
                string j;
                cin>>j;
                arr2[i][m] = j;
            }
        }

        for(int i=0;i<n;i++){
            string answer = "NO";
            for(int j=0;j<k;j++){
                for(int p=0;p<arr2[j].size();p++){
                    if(arr2[j][p] == arr1[i]){
                        answer = "YES";
                    }
                }
            }
            cout<<answer;

        }
    }
}
