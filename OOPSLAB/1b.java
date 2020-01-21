//1.b)prime no
import java.util.*;
public class prime{
    public static void main(String[] args)
    { int i=0;
      int flag=0;
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n==1){
            flag=1;
        }
        else if(n==2){flag=1;}
        else {
        for(i=2;i<n;i++)
        {
            if((n%i==0))
            {flag=0;
             break;    
            }
            else {
            flag=1;        
            }
        }}
        if(flag==1){
        System.out.println("Prime no");
    }
        else{
            System.out.println("Not a prime no");
        }
    }
}

