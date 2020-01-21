//3.c)GCD of two numbers:
#include<stdio.h>

int gcd(int n1,int n2){
    if(n2!=0){
       gcd(n2,n1%n2);
    }
    else{
        return n1;
    }
}

void main(){
    printf("Enter any two numbers:\n");
    int a,b;
    scanf("%d%d",&a,&b);
    int x;
    x=gcd(a,b);
    printf("GCD:%d",x);
}

