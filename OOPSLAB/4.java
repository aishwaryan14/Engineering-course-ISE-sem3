//4.class complex:
import java.util.*;
class complex {
  double real,img;
  complex(){}
  complex(double real,double img){
    this.real=real;
    this.img=img;
  }
  
  void add(complex n1,complex n2){
   double addr=n1.real+n2.real;
   double addi=n1.img+n2.img;
   System.out.println(addr+" +i "+addi); 
  }
  void sub(complex n1,complex n2){
    double subr=n1.real+n2.real;
   double subi=n1.img+n2.img;
   System.out.println(subr+" +i "+subi); 
  }
  void prod(complex n1,complex n2){
    double prodr=(n1.real*n2.real)-(n1.img*n2.img);
    double prodi=(n1.real*n2.img)+(n2.real*n1.img);
    System.out.println(prodr+" +i "+prodi);
  }
  
  public static void main(String[] args) {  
  System.out.println("Enter two numbers:");
    Scanner sc=new Scanner(System.in);
   System.out.println("Enter the real and imaginary parts of the first number:");
    complex num1=new complex(sc.nextDouble(),sc.nextDouble());
   System.out.println("Enter the real and imaginary parts of the second number:");
    complex num2=new complex(sc.nextDouble(),sc.nextDouble()); 
    complex c=new complex(); 
    c.add(num1,num2);
    c.sub(num1,num2);
    c.prod(num1,num2);
  }
}

