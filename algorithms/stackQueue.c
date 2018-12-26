#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
struct node *top=NULL;
void push(int x)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=x;
  temp->next=top;
  top=temp;
}
void pop()
{
  struct node *temp;
  if(top==NULL)
  {
    return;
  }
  temp=top;
  top=top->next;
  free(temp);
}
