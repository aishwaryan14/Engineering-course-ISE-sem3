//9.Ordered Doubly Linked List:
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *FORW;
    struct node *BACK;
};

typedef struct node NODE;
NODE *newnode;
NODE *head;
NODE *tail;
NODE *start=NULL;

NODE *getnode(){
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter the element to insert:\n");
    int item;
    scanf("%d",&item);
    newnode->data=item;
    newnode->FORW=NULL;
    newnode->BACK=NULL;
    return(newnode);
}

void insert(){
    newnode=getnode();
    if(start==NULL){
        start=newnode;
        head=newnode;
        tail=newnode;
    }
    else if(newnode->data < head->data){
        head->BACK=newnode;
        newnode->FORW=head;
        head=newnode;
    }
    else if(newnode->data > tail->data){
        tail->FORW=newnode;
        newnode->BACK=tail;
        tail=newnode;
    }
    else{
        NODE *currptr;
        for(currptr=head;currptr!=tail;currptr=currptr->FORW){
            if(newnode->data > currptr->data && newnode->data < currptr->FORW->data){
                newnode->BACK=currptr;
                currptr->FORW->BACK=newnode;
                newnode->FORW=currptr->FORW;
                currptr->FORW=newnode;
            }
        }
    }
}
void display(){
    NODE *currptr;
    for(currptr=head;currptr!=NULL;currptr=currptr->FORW){
        printf("%d ",currptr->data);
    }
}

void main(){
    printf("Enter 1.Insert 2.Display 3. Exit: \n");
    int ch;
    while(1){
        scanf("%d",&ch);
        switch(ch){
            case 1:
             insert();
             break;
            case 2:
             display();
             break;
            case 3:
             exit(0);
             break;
        }
    }
}


