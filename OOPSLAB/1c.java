//1.c)bubble sort
import java.util.*;
public class bubble{
 public static void main(String[] args)
 {   Scanner sc=new Scanner(System.in);
     int[] a=new int[10] ;
     int i=0,j=0,n,temp;
     System.out.println("Enter the size of the array:");
     n=sc.nextInt();
     System.out.println("Enter the elements of the array:");
     for(i=0;i<n;i++)
     {
         a[i]=sc.nextInt();
     }
     for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
     }
     
    System.out.println("Elements after sort:");
    for(i=0;i<n;i++)
    {
        System.out.print(a[i]+" ");
    }
 }
    
    
}

