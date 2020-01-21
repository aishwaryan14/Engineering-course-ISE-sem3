//1.a.1).fibonacci
import java.util.*;
public class fibonacci
{
    public static void main(String[] args)
    {
        int x=-1,y=1,fib=0;
        int i=0;
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(i=0;i<=n;i++)
        {
            fib=x+y;
            x=y;
            y=fib;
            System.out.print(fib+" ");
        }
    }
    
    
}
