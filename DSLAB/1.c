//1.Conversion of infix to postfix:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 20
char s[size];
int top=-1;
char push(char symb)
{
    if(top==size-1)
    {
        printf("Stack full");
    }
    else{
    s[++top]=symb;
   }
}
char pop()
{
     return(s[top--]);
}
int isoperator(char sym){
    if(sym=='+'||sym=='-'||sym=='*'||sym=='/'||sym=='^')
    {
        return 1;
    }
    else{
    return 0;}
}
int precedence(char sym){
    if(sym=='^')
    {
        return 3;
    }
    else if(sym=='*'||sym=='/')
    {
        return 2;
    }
     else if(sym=='+'||sym=='-')
    {
        return 1;
    }
    else if(sym=='(')
    {
        return 0;
    }
    else{
    printf("Invalid input");
    exit (0);
}}

void main(){
char infix[size];
char postfix[size];
printf("Enter the infix expression:\n"); 
scanf("%s",infix);
char ch;
int i=0,j=0;
while(infix[i]!='\0'){
      ch=infix[i];
      if(ch=='(')
    {
        push(ch);
    }
    else if(isalnum(ch))
    {
        postfix[j]=ch;
        j++;
    }
    else if(isoperator(ch)==1)
    {
        if(ch!='^'){
            while(top!=-1 && precedence(s[top])>=precedence(ch))
            {
                postfix[j]=pop();
                j++;
            }
        }
        push(ch);
    }
    else if(ch==')')
    {
        while(s[top]!='(')
        {
            postfix[j]=pop();
            j++;
        }
        pop();
    }
    else
    {
        printf("Invalid expression");
        exit(0);
    }
    i++;
}
while(top>-1)
{
    postfix[j]=pop();
    j++;
}
postfix[j]='\0';
 printf("%s",postfix);
}
