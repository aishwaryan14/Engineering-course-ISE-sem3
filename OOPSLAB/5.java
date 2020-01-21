//5.Matrices:
import java.util.*;
class matrices{
  int m1[][]=new int[5][5];
  int m2[][]=new int[5][5];
  int prod[][]=new int[5][5];
  
  matrices(int r1,int c1,int r2,int c2){
    int i,j; 
    if(r1==c2){
    Scanner sc=new Scanner(System.in);  
    System.out.println("Enter the first matrix:");
    for(i=0;i<r1;i++){
     for(j=0;j<c1;j++){
      m1[i][j]=sc.nextInt(); 
      } 
     }  
     System.out.println("Enter the second matrix:");
     for(i=0;i<r2;i++){
       for(j=0;j<c2;j++){
         m2[i][j]=sc.nextInt();
       }
     } 
    }
    else{
      System.out.println("Matrices are not of the same order");
    }
  }
  
  void product(int r1,int c1,int r2,int c2){
    int i,j,k;
    int sum=0;
    for(i=0;i<r1;i++){
      for(j=0;j<c2;j++){
        for(k=0;k<r2;k++){
          sum+=m1[i][k]*m2[k][j];
        }
        prod[i][j]=sum;
        sum=0;
      }       
    }
  } 
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the no of rows and cols in m1:");
    int r1=sc.nextInt();
    int c1=sc.nextInt();
    System.out.println("Enter the no of rows and cols in m2:");
    int r2=sc.nextInt();
    int c2=sc.nextInt();
    matrices m=new matrices(r1,c1,r2,c2);
    m.product(r1,c1,r2,c2);
    System.out.println("The prod matricx:");
    for(int i=0;i<r1;i++){
      for(int j=0;j<c2;j++){
       System.out.print(" "+m.prod[i][j]);}
      System.out.println();
    }

 }


