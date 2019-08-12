#include <stdio.h>
int maxsize = 1050;
int stack[1050];
int top = -1;
int isempty(){
    if(top == -1)
        return -1;
    else
        return 0;

}
int isfull(){
    if(top == maxsize){
        return 1;
    }
    else{
        return 0;
    }
}
int peek(){
    return stack[top];
}
int pop(){
    int data;
    if(!isempty()){
        data = stack[top];
        top = top-1;
        return data;
    }
}
int push(int data){
    if(!isfull()){
        top = top+1;
        stack[top] = data;
    }
}
int main(){
    int n;
    int arr[1050];
    scanf("%d",&n);
    int i;
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    int min;
    min  = 1;
    for(i=0;i<n;i++){
        if(isempty()==0){
            if(stack[top]==min){
                pop();
                min++;
            }
        }
        else if(arr[i]==min){
            min++;
        }else{
            push(arr[i]);
        }

    }
    printf("%d",pop());
    printf("%d",isempty());
    if(isempty() == -1){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}   
