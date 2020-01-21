//3.class stack

import java.util.*;
class stack {
  int top;
  int size;
  int s[];
  int item,ditem;
  stack(int size){
   this.size=size;
    top=-1;
    s=new int[size];
  }
  void push(){
    if(top==size-1)
    {
      System.out.println("Stack overflow");
    }
    else
    {
      Scanner sc=new Scanner(System.in); 
      System.out.println("Enter the element to be added:");
      item=sc.nextInt();
      s[++top]=item;
      System.out.println("Element added is:"+s[top]);
    }
    
  }
  void pop(){
    if(top==-1)
    {System.out.println("Stack underflow");}
    else{
      ditem=s[top--];
    System.out.println("Element removed is:"+ditem);}
  }
  void display(){
    int i;
    if(top==-1)
    {System.out.println("Stack is empty");
    }
    else{
      System.out.println("Elements of the stack:");
      for(i=0;i<=top;i++)
      {
       System.out.print(s[i]+" "); 
      }
      System.out.println();
    }
  }
  public static void main(String[] args) {
    int ch;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of the stack");
    int size=sc.nextInt();
    stack ob=new stack(size);
    System.out.println("Enter the operation to be performed");
    System.out.println("1.PUSH 2.POP 3.Display 4.Exit:");
    while(true){
      System.out.println("Enter your choice:");
      ch=sc.nextInt();
      switch(ch){
        case 1:
          ob.push();
          break;
        case 2:
          ob.pop();
          break;
        case 3:
          ob.display();
          break;
        case 4: 
          System.exit(0);
          break;
        default:
          System.out.println("Wrong choice");
          break;
      }
     
    }
                    
   }
}

