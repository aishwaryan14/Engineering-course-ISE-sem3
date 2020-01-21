//11.Binary Search Tree:
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node NODE;
NODE *root=NULL;
NODE *newnode;
NODE *currptr=NULL,*parent=NULL;

void insert(){
    printf("Enter the data:\n");
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->left=newnode->right=NULL;
    scanf("%d",&newnode->data);
    currptr=root;
    while(currptr){
        parent=currptr;
        if(currptr->data > newnode->data){
            currptr=currptr->left;
        }
        else
        {
            currptr=currptr->right;
        }
    }
     if(parent->data>newnode->data){
         parent->left=newnode;
     }
     else
     {
         parent->right=newnode;
     }
}
void inorder(NODE *tree){
    if(tree!=NULL){
        inorder(tree->left);
        printf("%d ",tree->data);
        inorder(tree->right);
    }
}
void main(){
    printf("Enter the root node:\n");
    root=(NODE*)malloc(sizeof(NODE));
    scanf("%d",&root->data);
    int ch;
    while(1){
    printf("Enter 1.Insert 2.Display 3.Exit:\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
         insert();
         break;
        case 2:
          printf("Elements of the bst:");
          inorder(root);
          printf("\n");
          break;
        case 3:
        exit(0);
        break;}
    }
}

