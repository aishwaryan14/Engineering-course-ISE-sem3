//6.Singly Linked list:
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

typedef struct node NODE;
NODE *currptr;
NODE *start=NULL;
NODE *newnode;

NODE *getnode(){
    int item;
    newnode =(NODE *)malloc(sizeof(NODE));
    printf("Enter the element to be inserted:\n");
    scanf("%d",&item);
    newnode->data=item;
    newnode->link=NULL;
    return newnode;
}
void insert_beg(){
    newnode=getnode();
    if(start==NULL){
        start=newnode;
    }
    else{
        currptr=start;
        newnode->link=currptr;
        currptr=newnode;
        start=currptr;
    }
}

void insert_end(){
    newnode=getnode();
    if(start==NULL){
        start=newnode;
    }
    else {
        currptr=start;
        while(currptr->link!=NULL){
        currptr=currptr->link;}
        currptr->link=newnode;
    }
}
void insert_pos(){
    currptr=start;
    int count=0;
    while(currptr!=NULL){
        count++;
        currptr=currptr->link;
    }
    int pos;
    printf("Enter the pos:\n");
    scanf("%d",&pos);
    if(pos==1){
        insert_beg();
    }
    else if(pos==(count+1)){
        insert_end();
    }
    else{
        int i;
            newnode=getnode();

        currptr=start;
        for(i=1;i<pos-1;i++){
            currptr=currptr->link;
        }
        newnode->link=currptr->link;
        currptr->link=newnode;
    }
}
void delete_beg(){
    if(start==NULL){
        printf("List is empty\n");
    }
    else if(start->link==NULL){
        currptr=start;
        start=NULL;
        printf("element deleted is:%d \n",currptr->data);
        free(currptr);
    }
    else{
        currptr=start;
        start=currptr->link;
        printf("element deleted is:%d \n",currptr->data);
        free(currptr);
    }
}

void delete_end(){
    if(start==NULL){
        printf("List empty\n");
    }
    else if(start->link==NULL){
        currptr=start;
        printf("element deleted is:%d\n",currptr->data);
        start=NULL;
        free(currptr);
    }
    else{
        NODE *preptr=NULL;
        currptr=start;
        while(currptr->link!=NULL){
            preptr=currptr;
            currptr=currptr->link;
        }
        printf("element deleted is:%d\n",currptr->data);
        preptr->link=NULL;
        free(currptr);
    } 
}
void delete_pos(){
    if(start==NULL){
        printf("List empty");
    }
    int pos;
    printf("Enter the pos to be deleted\n:");
    scanf("%d",&pos);
    if(pos==1){
        delete_beg();
    }
    else{int i;
        currptr=start;
        NODE *preptr=NULL;
        for(i=1;i<pos;i++){
            preptr=currptr;
            currptr=currptr->link;
        }
        preptr->link=currptr->link;
        printf("element deleted s:%d\n",currptr->data);
        free(currptr);
    }
}
void display(){
    if(start==NULL){
        printf("List is empty\n");
    }
    else{
        for(currptr=start;currptr!=NULL;currptr=currptr->link){
            printf("%d ",currptr->data);
        }printf("\n");
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
        }
    }
}

