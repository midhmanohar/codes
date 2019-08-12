#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    stack <int> s1;
    stack <int> s2;
    stack <int> s3;
    int sum1,sum2,sum3;
    int elem;
    int arr1[100005];
    int arr2[100006];
    int arr3[100005];
    sum1=sum2=sum3=0;
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
        sum1+=arr1[i];
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
        sum2+=arr2[i];
    }
    for(int i=0;i<n3;i++){
        scanf("%d",&arr3[i]);
        sum3+=arr3[i];
    }
    for(int i=n1-1;i>=0;i--){
        s1.push(arr1[i]);
    }
    for(int i=n2-1;i>=0;i--){
        s2.push(arr2[i]);
    }
    for(int i=n3-1;i>=0;i--){
        s3.push(arr3[i]);
    }
    int maxsum = 0;
    while(true){
        if(s1.empty() || s2.empty() || s3.empty()){
            cout<<0<<endl;
            break;
        }
        if(sum1==sum2 && sum2==sum3){
            cout<<sum1<<endl;
            break;
        }
        maxsum = max(sum1,max(sum2,sum3));
        if(maxsum == sum1){
            sum1-=s1.top();
            s1.pop();
        }
        if(maxsum == sum2){
            sum2-=s2.top();
            s2.pop();
        }
        if(maxsum == sum3){
            sum3-=s3.top();
            s3.pop();
        }

    }
}
