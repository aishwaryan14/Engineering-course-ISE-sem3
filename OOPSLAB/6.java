6.String class:
import java.util.*;
class strng {
  String s;
    void extract(){
    int m,n;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the starting position to extract:");
    n=sc.nextInt();
    System.out.println("Enter the no of characters to be extracted:");
    m=sc.nextInt();
    String sub;
    sub=s.substring(n,m+n);
    System.out.println("Substtring:"+sub);
  }
  void replace(){
    String s1;
    Scanner sc=new Scanner(System.in);
    String s2;
    System.out.println("Enter the string to be replaced:");
     s1=sc.next();
    System.out.println("Enter the string to replace:");
    s2=sc.next();
    String s3;
    s3=s.replaceAll(s1,s2);
    System.out.println("Replaced string:\n"+s3);
  }
  void occurrence(){
    Scanner sc=new Scanner(System.in);
    String word;
    System.out.println("ENter the word:");
    word=sc.next();
    int i;
    int count;
    count=0;
    for(i=s.indexOf(word);i>=0;i=s.indexOf(word,i+1)){
      count=count+1;
    }
    System.out.println("No of occurrences:"+count);
  }
  void rearrange(){
  char ch[];
  ch=s.toCharArray();
  Arrays.sort(ch);
  String newstr=new String(ch);
  System.out.println("Rearranged string:"+newstr); 
  }
  void compare(){
  int flag=1;
  Scanner sc=new Scanner(System.in);
  String compstr;
  System.out.println("Enter the string to be compared to:");
  compstr=sc.nextLine();
  flag=s.compareTo(compstr);
  if(flag==0){
  System.out.println("Strings are same");
  }
  else{
  System.out.println("Strings are different");
  }
  }
  void concatinate(){
  String constr;
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter the string to be concatinated:");
  constr=sc.nextLine();
  String newstr;
  newstr=s.concat(constr);
  System.out.println("Concatinated string:"+newstr);
  }
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    strng ob=new strng();
    System.out.println("Enter the string:");
    ob.s=sc.nextLine();
    ob.extract();
    ob.occurrence();
    ob.replace();
    ob.rearrange();
    ob.compare();
    ob.concatinate(); 
  }
}

