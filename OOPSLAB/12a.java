//12.a)Array List:
import java.util.*;
class arraylist {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    ArrayList<String> Q=new ArrayList<String>();
    System.out.println("Enter 1.Enqueue 2.Dequeue 3.Display 4.Exit:\n");
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
          System.out.println("String dequeudd is:"+Q.remove(0));
          break;
        case 3:
          System.out.println("Queue of Strings is:");
          for(int i=0;i<Q.size();i++){
            System.out.println(Q.get(i));
          }
            break;
        case 4:
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

