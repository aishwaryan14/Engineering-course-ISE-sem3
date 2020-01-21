//3.b)Binary Search:
#include<stdio.h>
#include<stdlib.h>

int b_search(int a[],int beg,int end,int k){
    int mid;
    if(beg>end){
        return -1;
    }
    mid=(beg+end)/2;
    if(a[mid]==k){
        return mid;
    }
    else if(a[mid]>k){
        b_search(a,beg,mid-1,k);
    }
    else if(k>a[mid]){
        b_search(a,mid+1,end,k);
    }
}
void main(){
    int a[20],i,n,key;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched:\n");
    scanf("%d",&key);
    int flag;
    flag=b_search(a,0,n,key);
    if(flag==-1){
        
        printf("Element not found:");
    }
    else{
        printf("Element is found at:%d",(flag+1));
    }
    }

