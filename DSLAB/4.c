//4.Linear queue:
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front=-1,rear=-1;
int queue[SIZE];

void insert(int item){
    if(rear==SIZE-1)
    {
        printf("Queue overflow\n");
    }
    else if(front==-1 && rear==-1)
    {
      front=rear=0;
      queue[rear]=item;
    }
    else{
      rear=rear+1;
      queue[rear]=item;
    
    }
}
void delete(){
  int ditem;
  if(front==-1){
    printf("Queue underflow\n");
  }
  else if(front==rear)
  {ditem=queue[front];
   printf("Element deleted is:%d\n",ditem);
   front=rear=-1;
  }
  else{
    ditem=queue[front];
    printf("Element deleted is:%d\n",ditem);
    front++;
  }
}
void display()
{
  int i=0;
  if(rear==-1)
  {
    printf("Queue is empty\n");
  }
  else{
  printf("Elements of the queue:\n");
  for(i=front;i<=rear;i++){
    printf("%d ",queue[i]);
  }
}}

void main(){
  int item;
  printf("Enter the operation to be performed:\n");
  printf("1.INSERT 2.DELETE 3.DISPLAY 4.EXIT:\n");
  int ch;
  while(1){
    printf("Enter choice:\n");  
    scanf("%d",&ch);
    switch(ch){
      case 1:
        printf("Enter the element to be inserted:\n");
        scanf("%d",&item);
        insert(item);
        break;
      case 2:
        delete();
        break;
      case 3:
         display();
         break;
      case 4:
        printf("Exit");
        exit(0);
        break;
      default:
        printf("Invalid choice");
        break;
    }
  }
  
}

