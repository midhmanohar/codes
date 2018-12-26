#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int array[SIZE];
int front = -1;
int rear = -1; 
int enqueue(int data);
int dequeue();
void display();

int isEmpty() {
  if(front == -1 && rear == -1) 
    return 1;
  else 
    return 0;  
}
int main()
{
  int choice;
  int data;
  while(1)
  {
  printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n Enter Your Choice\n");
  scanf("%d",&choice);
    switch(choice) {
	  case 1:
	    printf("\nEnter the data to be inserted:");
	    scanf("%d", &data);
	    enqueue(data);
	    break;
	  case 2:
	    dequeue();
	    break;
	  case 3:
	    display();
	    break;
	  case 4:
	    exit(0);  
	  default:
	    printf("\nInvalid Choice!");           
	}
	} 
  return 0;
}
int enqueue(int data) {
  if(front == (rear + 1) % SIZE) {
    printf("\nOverflow\n");
    return -1;
  } else if (isEmpty()) {
    front = 0;
    rear = 0;
  } else {
    rear = (rear + 1) % SIZE;
  }
  
  array[rear] = data;
  
  return array[rear];
}

int dequeue() {
  int value = 0;
	
  if(isEmpty()) {
    printf("\nUnderflow\n");
    return -1;
  } else if(front == rear) {
    front = -1;
    rear = -1;
  } else {
    value = array[front];
    front = (front + 1) % SIZE;
  }
  return value;
}
void display() {
  
  int i = front;
  if(rear==-1)
  {
  printf("Queue is empty\n");
  }
  
  while(i != rear) {
    printf("%d ", array[i]);
    i = (i + 1) % SIZE;	  
  }
  printf("%d",array[rear]);
  printf("\n");
}









