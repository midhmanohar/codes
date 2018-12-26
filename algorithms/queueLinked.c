#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*front,*rear,*temp,*front1;
 
void enque(int data);
void deque();
void display();
void create();
 
void main()
{
    int item, choice;
 
    
    front=rear=NULL;
    while (1)
    {
	printf("\n 1 - Enque");
        printf("\n 2 - Deque");
        printf("\n 3 - Display");
        printf("\n 4- Exit");
        printf("\n Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &item);
            enque(item);
            break;
        case 2:
            deque();
            break;
	case 3:
            display();
            break;
        case 4:
            exit(0);
        
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
void enque(int item)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->next= NULL;
        rear->data = item;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->next = temp;
        temp->data = item;
        temp->next= NULL;
 
        rear = temp;
    }
 
}

void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->data);
        front1 = front1->next;
    }
    if (front1 == rear)
        printf("%d", front1->data);
}

void deque()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Queue underflow\n");
        return;
    }
    else
        if (front1->next ==NULL)
        {
	    printf("\n Dequed value : %d", front->data);
            free(front);
            front = NULL;
            rear = NULL;
            
        }
        else
        {
            front1 = front1->next;
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = front1;
        }
    
}

