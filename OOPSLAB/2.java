//2.class account
import java.util.*;
class account {
  int Accno;
  String name;
  int Phone_no;
  float balance_amt;
  
  void getinput(){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the acc o,name,phone no,balance amt:");
    Accno=sc.nextInt();
    name=sc.next();
    Phone_no=sc.nextInt();
    balance_amt=sc.nextFloat();
  }
  void Deposit(){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the amount to be deposited:");
    float amt=sc.nextFloat();
    balance_amt+=amt;
  }
  void Withdraw(){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the amount to be withdrawn:");
    float amt=sc.nextFloat();
    balance_amt-=amt;
  }
  public static void main(String[] args) {
    account a=new account();
    a.getinput();
    a.Deposit();
    a.Withdraw();
    System.out.println("Details:");
    System.out.println("Accno:"+a.Accno);
    System.out.println("name:"+a.name);
    System.out.println("phone no"+a.Phone_no);
    System.out.println("balance:"+a.balance_amt);
    
  }
}

