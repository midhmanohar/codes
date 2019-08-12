#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = NULL;
    struct Node* ptr;
    ptr = head;
    if(head==NULL){
        head = new_node;
        return;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = new_node;
    return;
}
void display(){
    struct Node* ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main(){
    int n;
    cin>>n;
    int new_data;
    while(n--){
        cin>>new_data;
        insert(new_data);
    }
    display();
}
