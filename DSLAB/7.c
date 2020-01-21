//7.Circular Linked List:
 #include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};
typedef struct node NODE;
NODE *last;
NODE *currptr;
NODE *newnode;

NODE *getnode(){
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter the element to be inserted:\n");
    int item;
    scanf("%d",&item);
    newnode->data=item;
    newnode->link=NULL;
    return newnode;
}

void insert_beg(){
    newnode=getnode();
    if(last==NULL){
        last=newnode;
        last->link=last;
    }
    else if(last->link==last){
        newnode->link=last;
        last->link=newnode;
    }
    else{
        newnode->link=last->link;
        last->link=newnode;
    }
}
void insert_end(){
    newnode=getnode();
    if(last==NULL){
        last=newnode;
        last->link=last;
    }
    else {
        newnode->link=last->link;
        last->link=newnode;
        last=newnode;
    }
}
void insert_pos(){
    if(last==NULL){
        printf("LIst empty");
        return;
    }
    int count=0;
    currptr=last->link;
    while(currptr!=last){
        count++;
        currptr=currptr->link;
    }count=count+1;
    printf("Enter the pos:\n");
    int pos;
    scanf("%d",&pos);
    if(pos==1){
        insert_beg();
    }
    else if(pos==(count+1)){
        insert_end();
    }
    else if(pos>1&&pos<=count){
        int i;
        newnode=getnode();
       currptr=last->link;
       for(i=1;i<pos-1;i++){
            currptr=currptr->link;
        }
        newnode->link=currptr->link;
        currptr->link=newnode;
    }
}
void delete_beg(){
    if(last==NULL){
        printf("List is empty");
    }
    else if(last==last->link){
        currptr=last->link;
        last=NULL;
        printf("Element deleted is%d\n:",currptr->data);
        free(currptr);
    }
    else{
        currptr=last->link;
        last->link=currptr->link;
        printf("Element deleted is%d\n:",currptr->data);
        free(currptr);
    }
}
void delete_end(){
    if(last==NULL){
        printf("List is empty");
    }
    else if(last==last->link){
        currptr=last->link;
        last=NULL;
        printf("Element deleted is%d\n:",currptr->data);
        free(currptr);
    }
    else{
      currptr=last->link;
      NODE *preptr=NULL;
      while(currptr->link!=last->link){
          preptr=currptr;
          currptr=currptr->link;
      }
      preptr->link=currptr->link;
      last=preptr;
      printf("Element deleted is%d\n:",currptr->data);
      free(currptr);
    }
}
void delete_pos(){
    if(last==NULL){
        printf("LIst is empty\n");
        return;
    }
    currptr=last->link;
    int count=0;
    while(currptr!=last){
        currptr=currptr->link;
        count++;
    }count=count+1;
    printf("Enter the pos:\n");
    int pos;
    scanf("%d",&pos);
    if(pos==1){
        delete_beg();
    }
    else if(pos>1&&pos<=count){
        int i;
        currptr=last->link;
        NODE *preptr=NULL;
        for(i=1;i<pos;i++){
            preptr=currptr;
            currptr=currptr->link;
        }
        preptr->link=currptr->link;
        if(currptr==last){
            last=preptr;
        }
        printf("Element deleted is:%d",currptr->data);
        free(currptr);
    }
}
void display(){
    if(last==NULL){
        printf("LIst is empty");
    }
    else{
    for(currptr=last->link;currptr!=last;currptr=currptr->link){
       printf("%d ",currptr->data);   
     }printf("%d \n",currptr->data);
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

