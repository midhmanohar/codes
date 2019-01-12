#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int size =0;
void insert();
void display();
void delete();
int search(char lab[]);
void modify();

struct symtab{
    char label[10],symbol[10];
    int addr;
    struct symtab *next;
};
struct symtab *first,*last;
void main()
{
   int choice,y;
   char la[10];
   printf("1.insert\n2.display\n3.delete\n4.search\n5.modify\n");
   scanf("%d",&choice);
   while(1){

    switch(choice){
        case 1:insert();break;
        case 2:display();break;
        case 3:delete();break;
        case 4:printf("enter the label to be searched\n");
        scanf("%s",la);
        y = search(la);
        printf("search result:\n");
        if(y==1){
            printf("label is present in the symbol table\n");
        }else{
            printf("not present");
        }
        break;
        case 5:modify();
        break;
        default:exit(0);
    } 
   }
   void insert()
   {
       int y;
       char la[10];
       printf("enter the label\n");
       scanf("%s",la);
       y=search(la);
       if(y==1){
           printf("label present\n");
       }else{
           struct symtab *p;
           p=malloc(sizeof(struct symtab));
           strcpy(p->label,la);
           printf("enter the symbol\n");
           scanf("%s",p->symbol);
           printf("enter the address\n");
           scanf("%d",&p->addr);
           p->next=NULL;
           if(size==0){
               first = p;
               last = p;
           }else{
               last ->next = p;
               last = p;
           }
           size++;

       }
       printf("label inserted\n");
   }
   void display(){
       int i;
       struct symtab *p;
       p=first;
       printf("\nlabel\tsymbol\taddr\t\n");
       for(i=0;i<size;i++){
           printf("%s\t%s\t%d\n",p->label,p->symbol,p->addr);
           p=p->next;
       }
   }
   int search(char lab[]){
       int i,flag=0;
       struct symtab *p;
       p=first;
       for(i=0;i<size;i++){
           if(strcmp(p->label,lab)==0){
               flag=1;
           }
           p = p->next
       }
       return flag;
   }
  void delete(){
      int a;
      char la[10];
      struct symtab *p,*q;
      p=first;
      printf("enter the label to be deleted:\n");
      scanf("%s",la);
      a = search(la);
      if(a==0){
          printf("present");
      }else{
          if(strcmp(first->label,la)==0)
      }
  }
}