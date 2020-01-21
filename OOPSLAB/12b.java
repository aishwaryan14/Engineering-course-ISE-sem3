//12.b)LinkedList:
import java.util.*;
import java.util.Iterator;

class linkedlist {
  public static void main(String[] args) {
  LinkedList<String> Q=new LinkedList<String>();
  Iterator itr;  
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter 1.Insert 2.Delete 3.Display 4.Print names whose lenggth is < 5 5.Exit:");
  int ch;
    while(true){
    System.out.println("Enter your choice:");
      ch=sc.nextInt();
     switch(ch){
       case 1:
         System.out.println("Enter a string :");
         String s=sc.next();
         Q.add(s);
         break;
       case 2:
         System.out.println("The deleted string is:"+Q.remove(0));
         break;
       case 3:
         System.out.println("Strings in the list:");
         itr=Q.iterator();
         while(itr.hasNext()){
           System.out.println(itr.next());
         }
         break;
       case 4:
         itr=Q.iterator();
         System.out.println("Strings having length < 5");
         while(itr.hasNext()){
           String s1=(String)itr.next();
           if(s1.length()<5){
             System.out.println(s1);
           }
         }
         break;
       case 5:
         System.out.println("Exit");
         System.exit(0);
         break;
       default:
         System.out.println("Wrong choice");
         break;
     } 
    
    
  }  
  }
}

