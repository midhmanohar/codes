#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *lchild,*rchild;
};

struct node *insert(struct node*,int);
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);

int main()
{
  struct node *root=NULL;
  int item,choice;
while(1)
  {
    printf("Enter your choice: \n1.insert\n2.preorder\n3.inorder\n4.postorder\n5.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      printf("Enter data to be inserted\n");
      scanf("%d",&item);
      root=insert(root,item);
      break;
      case 2:
      preorder(root);
      break;
      case 3:
      inorder(root);
      break;
      case 4:
      postorder(root);
      break;
      case 5:
      exit(0);
      break;
      default:printf("Invalid choice:\n");
      }
  }
}
struct node *getNode(int item)
{
  struct node *newNode=(struct node *)malloc(sizeof(struct node));
  newNode->data=item;
  newNode->lchild=newNode->rchild=NULL;
  return(newNode);
}
struct node *insert(struct node *root,int item)
{
  struct node *temp=root;
  if(root==NULL)
  {
    getNode(item);
    return(root);
  }
  if(item<temp->data)
  {
    if(temp->lchild==NULL)
    {
      temp->lchild=getNode(item);
    }
    else
    {
      temp=temp->lchild;
    }
  }
  else
  {
    if(temp->rchild==NULL)
    {
      temp->rchild=getNode(item);
    }
    else
    {
      temp=temp->rchild;
    }
  }
  return root;
}

void preorder(struct node *root)
{
  printf("%d",root->data);
  if(root->lchild!=NULL)
  {
    preorder(root->lchild);
  }
  if(root->rchild!=NULL)
  {
    preorder(root->rchild);
  }
}
void inorder(struct node *root)
  {
    if(root->lchild!=NULL)
    {
      inorder(root->lchild);
    }
    printf("%d",root->data);
    if(root->rchild!=NULL)
    {
      inorder(root->rchild);
    }
  }
void postorder(struct node *root)
  {
    if(root->lchild!=NULL)
    {
      postorder(root->lchild);
    }
    if(root->rchild!=NULL)
    {
      postorder(root->rchild);
    }
    printf("%d",root->data);
  }
