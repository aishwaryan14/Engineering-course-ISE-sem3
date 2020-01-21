//7.class Personal:
import java.util.*;
class personal {
 
  String name,education;
  int age,nol,yoe;
  double basic,da,hra,loan_amt,salary;
  
  personal(String name,int age,String education,double basic,double da,double hra,int yoe,int nol,double loan_amt){
    this.name=name;
    this.age=age;
    this.basic=basic;
    this.da=da;
    this.hra=hra;
    this.loan_amt=loan_amt;
    this.education=education;
    this.nol=nol;
    this.yoe=yoe;
  }
  
  void iseligible(){
    if(nol<5&& loan_amt<500000){
      System.out.println("Eligible for loan");
    }
    else{
      System.out.println("Not eligible");
    }
  }
  
  double taxPay(){
    salary=basic+da+hra;
    if(salary<100000)
      return(0);
    else if(salary>=100000 && salary<500000)
      return(0.1*salary);
    else if(salary>=500000&&salary<1000000)
      return(0.5*salary);
    else
      return(0.8*salary);
  }
  
  void iseligiblePromotion(){
    if(yoe>10&&salary<600000)
      System.out.println("Eligible for a promotion");
    else
      System.out.println("Not eligible");
  }
  
  void display(){
    System.out.println("\nName:"+name+"\nAge:"+age+"\nloanamt:"+loan_amt);  
  }
  
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the no of employess:");
    int n=sc.nextInt();
    for(int i=0;i<n;i++){
    System.out.println("Enter the name,age,basic,da,hra,loanamt for person:"+(i+1));
    personal ob=new personal(sc.next(),sc.nextInt(),sc.next(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble(),sc.nextInt(),sc.nextInt(),sc.nextDouble());
    System.out.println("Enter 1.To check eligibility 2.taxPay() 3.iseligible promotion 4.display: 5.exit");
     while(true){
       int ch=sc.nextInt();
       switch(ch){
         case 1:
           System.out.println("Eligibilty for loan");
           ob.iseligible();
           break;
         case 2:
           System.out.println("Tax:"+ob.taxPay());
           break;
         case 3:
           System.out.println("Eligibility for promotion:");
           ob.iseligiblePromotion();
           break;
         case 4:
           System.out.println("Details:");
           ob.display();
           break;
         default:
           System.out.println("Invalid choice");
           break;
       }
     }
    }
  }
}

