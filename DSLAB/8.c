//8.Doubly linked list:
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *FORW;
    struct node *BACK;
};
typedef struct node NODE;
NODE *start=NULL;
NODE *newnode;
NODE *currptr;

NODE *getnode(){
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter the element to be inserted:\n");
    int item;
    scanf("%d",&item);
    newnode->data=item;
    newnode->FORW=NULL;
    newnode->BACK=NULL;
    return newnode;
}
void insert_beg(){
    newnode=getnode();
    if(start==NULL){
        start=newnode;
    }
    else {
        currptr=start;
        newnode->FORW=currptr;
        start=newnode;
        currptr->BACK=newnode;
    }
    
}
void insert_end(){
    newnode=getnode();
    if(start==NULL){
        start=newnode;
    }
    else {
        currptr=start;
        while(currptr->FORW!=NULL){
            currptr=currptr->FORW;
        }
        currptr->FORW=newnode;
        newnode->BACK=currptr;
    }
}
void insert_pos(){
    if(start==NULL){
        start=newnode;
    }
    int pos,count=0;
    currptr=start;
    while(currptr!=NULL){
        currptr=currptr->FORW;
        count++;
    }
    printf("Enter the pos:");
    scanf("%d",&pos);
    if(pos==1){
        insert_beg();
    }
    else if(pos==count+1){
        insert_end();
    }
    else if(pos>1&&pos<=count){
        int i;
        newnode=getnode();
        currptr=start;
        for(i=1;i<pos;i++){
            currptr=currptr->FORW;
        }
        newnode->FORW=currptr;
        currptr->BACK->FORW=newnode;
        newnode->BACK=currptr->BACK;
        currptr->BACK=newnode;
    }
}
void delete_beg(){
    if(start==NULL){
        printf("list is empty");
    }
    else if(start->FORW==NULL){
        currptr=start;
        start=NULL;
         printf("element deleted:%d\n",currptr->data);
        free(currptr);
    }
    else{
        currptr=start;
        start=currptr->FORW;
        printf("element deleted:%d\n",currptr->data);
        free(currptr);
    }
}
void delete_end(){
     if(start==NULL){
        printf("list is empty");
    }
    else if(start->FORW==NULL){
        currptr=start;
        start=NULL;
         printf("element deleted:%d\n",currptr->data);
        free(currptr);
    }
    else{
        currptr=start;
        while(currptr->FORW!=NULL){
            currptr=currptr->FORW;
        }currptr->BACK->FORW=NULL;
        printf("element deleted:%d\n",currptr->data);
        free(currptr);
    }
}
void delete_pos(){
    if(start==NULL){
        printf("List is empty\n");
    }
    int count=0;
    currptr=start;
    while(currptr!=NULL){
        currptr=currptr->FORW;
        count++;
    }int pos;
    printf("Enter the pos:");
    scanf("%d",&pos);
    if(pos==1){
        delete_beg();
    }
    else {
        currptr=start;
        int i;
    for(i=1;i<pos;i++)
        {
            currptr=currptr->FORW;
        }
        printf("Element deleted is:%d",currptr->data);
        currptr->BACK->FORW=currptr->FORW;
        currptr->FORW->BACK=currptr->BACK;
        free(currptr);
    }
}
void display(){
    if(start==NULL){
        printf("list empty\n");
    }
    else {
        for(currptr=start;currptr!=NULL;currptr=currptr->FORW){
            printf("%d ",currptr->data);
        }
    }
}
void main(){
    int ch;
    printf("Enter 1.Insertbeg 2.Insertend 3.Insertpos 4.deletebeg 5.deleteend 6.deletepos 7.display 8.exit:\n");
    while(1){
        printf("Enter ur choice:\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
             insert_beg();
             break;
           case 2:
            insert_end();
            break;
            case 3:
             insert_pos();
             break;
            case 4:
             delete_beg();
             break;
            case 5:
             delete_end();
             break;
            case 6:
             delete_pos();
             break;
            case 7:
             display();
             break;
            case 8:
             exit(0);
             break;
        }
    }
}

