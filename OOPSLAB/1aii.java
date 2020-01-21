//1.a.ii)Fibonacci using recursion
import java.util.*;
public class fibonacci{
 public static int fib(int n){
     if(n==0)
     return 0;
     else if(n==1)
     return 1;
     else
     return fib(n-1)+fib(n-2);
     
 }
  public static void main(String[] args)
    {int n,i=0;
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    for(i=0;i<=n;i++){
    System.out.print(fib(i)+" ");}
    }
}

