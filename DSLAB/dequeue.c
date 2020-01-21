//-dequeue:
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front=-1,rear=-1;
int queue[SIZE];

void insert_rear(int item){
    int i;
    if(front!=0 && rear==SIZE-1)
    {
        for(i=front;i<=rear;i++)
       {
           queue[i-1]=queue[i];
       }
       queue[rear]=item;
       front--;;
    }
    else if(rear==SIZE-1)
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

void insert_front(int item)
{int i;
    if(front==0 && rear!=SIZE-1)
    {
        for(i=rear;i>=front;i--)
       {
           queue[i+1]=queue[i];
       }
       queue[front]=item;
       rear++;
    }
    else if(front==0){
        printf("Element cannot be inserted at the front of the queue\n");
    } 
     else if(front==-1 && rear==-1)
    {
      front=rear=0;
      queue[front]=item;
    }
    else if(front!=0){
        queue[--front]=item;
    }
   
}
void delete_front(){
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
void delete_rear()
{int ditem;
    if(rear==-1)
    {
        printf("Queue underflow\n");
    }
    else if(rear==front)
    {
     ditem=queue[rear];
   printf("Element deleted is:%d\n",ditem);
   front=rear=-1;   
    }
    else{
        ditem=queue[rear--];
        printf("Element deleted is:%d\n",ditem);
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
  printf("1.insert_rear 2.delete_front 3.insert_front 4.delete_rear: 5.display 5.exit\n");
  int ch;
  while(1){
    printf("Enter choice:\n");  
    scanf("%d",&ch);
    switch(ch){
      case 1:
        printf("Enter the element to be inserted  at the rear end:\n");
        scanf("%d",&item);
        insert_rear(item);
        break;
      case 2:
        delete_front();
        break;
      case 3:
        printf("Enter the element to be inserted at the front end:\n");
        scanf("%d",&item);
        insert_front(item);
        break;
      case 4:
        delete_rear();
        break;
      case 5:
         display();
         break;
      case 6:
        printf("Exit");
        exit(0);
        break;
      default:
        printf("Invalid choice");
        break;
    }
  }
  
}



