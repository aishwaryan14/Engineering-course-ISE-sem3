//10.Binary tree:
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node NODE;
NODE *root=NULL;

int item;

int islchild(NODE *tree){
    int ch;
    printf("DO you want to create lchild for %d\n ENter 1 y 2 n:",tree->data);
    scanf("%d",&ch);
    if(ch==1)
    return 1;
    else
    return 0;
}
int isrchild(NODE *tree){
    int ch;
    printf("DO you want to create rchild for %d\n ENter 1 y 2 n:",tree->data);
    scanf("%d",&ch);
    if(ch==1)
    return 1;
    else
    return 0;
}

void create(NODE *tree){
    if(islchild(tree)){
        tree->lchild=(NODE*)malloc(sizeof(NODE));
        printf("Ente rthe data:");
        scanf("%d",&tree->lchild->data);
        create(tree->lchild);
    }
    else{
        tree->lchild=NULL;}
        
    if(isrchild(tree)){
            tree->rchild=(NODE*)malloc(sizeof(NODE));
            printf("Enter teh data:");
            scanf("%d",&tree->rchild->data);
            create(tree->rchild);
        }
    else{tree->rchild=NULL;}    
}
    
void inorder(NODE *tree){
    if(tree!=NULL){
        inorder(tree->lchild);
        printf("%d",tree->data);
        inorder(tree->rchild);
    }
}    

void preorder(NODE *tree){
     if(tree!=NULL){
         printf("%d",tree->data);
         preorder(tree->lchild);
         preorder(tree->rchild);
     }
}

void postorder(NODE *tree){
    if(tree!=NULL){
    postorder(tree->lchild);
    postorder(tree->rchild);
    printf("%d",tree->data);
}}
  
 void main(){
     printf("Enter the root NODE");
     root=(NODE*)malloc(sizeof(NODE));
     printf("Enter the data");
     scanf("%d",&root->data);
     create(root);
     printf("Preorder traversal:");
     preorder(root);
     printf("Inorder traversal");
     inorder(root);
     printf("postorder traversal");
     postorder(root);
 }           
  

