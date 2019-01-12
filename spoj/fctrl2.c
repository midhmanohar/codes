#include <stdio.h>
void fact(int n);
int multiply(int i,int arr[],int m);
int main(){
    int n,num;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        fact(num);

    }
}
void fact(int n){
  int arr[160];
  arr[0] = 1;
  int m=1;
  int i=0;
  for(i=2;i<=n;i++){
      m = multiply(i,arr,m);
  }
  for(i=m-1;i>=0;i--){
      printf("%d",arr[i]);
  }
  printf("\n");
}
int multiply(int x,int arr[],int m){
    int carry = 0;
    int i = 0,prod = 0;
    for(i=0;i<m;i++){
        prod = arr[i]*x+carry;
        arr[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        arr[m] = carry%10;
        carry = carry/10;
        m++;
    }
    return m;
}