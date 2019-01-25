#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a,int b);
int main(){
    int t,i;
    double n;
    int power;
    int length,count,flag=0;
    scanf("%d",&t);
    while(t--){
        count = 0;
        string num;
        cin>>num;
        length = num.length();
        for(i=length-1;i>=0;i--){
            if(num[i]=='.'){
                flag=1;
                break;
            }else{
                count++;
            }
        }
        if(flag){
            int numerator = 0;
            for(i=0;i<length;i++){
                if(num[i]!='.'){
                    numerator = numerator*10+(num[i]-'0');
                }
            }
            power = pow(10,count);
            printf("%d\n",power/gcd(numerator,power));
        }else{
            printf("%d\n",1);
        }

    }
}
int gcd(int a,int b){
    if(a<b){
        return gcd(b,a);
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}