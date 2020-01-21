//2.Evaluation of postfix expression:
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define size 20
char s[size];//postfix expression
float opn[size];
int top=-1;
float op1;
float op2;
char ch;
void push (float opnd)
{
    top++;
    opn[top]=opnd;
}
float pop()
{
    return(opn[top--]);
}
void main()
{
    printf("Enter the postfix expression:\n");
    scanf("%s",s);
    int i=0;
    while((ch=s[i++])!='\0'){
        if(isdigit(ch)){
            push((float)(ch - '0'));
        }
        else{
            op2=pop();
            //printf("%f",op2);
            op1=pop();
            //printf("%f",op1);
            switch(ch)
            {
                case '+':
                   push(op2+op1);
                   break;
                case '-':
                   push(op1-op2);
                   break;
                case '*':
                   push(op1*op2);
                   break;
                case '/':
                   push(op1/op2);
                   break;
               case '^':
                   push(pow(op1,op2));
                   break;
              default:
                     printf("Invalid  input");
                     break;
            }
        }
    }
    printf("%f",pop());
   }

