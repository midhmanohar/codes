#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};
struct node *start=NULL;
void insert_beg()
{
  int item;
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  printf("enter data:\n");
  scanf("%d",&item);
  item=temp->data;
  temp->next=start;
  start=temp;
}

void delete_beg()
{
  struct node *ptr;
  ptr=start;
  start=start->next;
   printf("del is %d",ptr->data);
  free(ptr);

}
void display()
{
  struct node *temp;
  temp=start;
  while(temp->next!=NULL)
  {
    printf("%d-->",temp->data);
    temp=temp->next;
  }
}
int main()
{
  insert_beg();
  insert_beg();
  insert_beg();

  delete_beg();
  display();
}
