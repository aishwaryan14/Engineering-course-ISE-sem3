//9.Vehicle:
import java.util.*;

abstract class vehicle {
  int year_of_manufacture;
  vehicle(){
   year_of_manufacture=0;}
  abstract int getData();
  abstract int putData(int x);
}

class TwoWheeler extends vehicle{
  int getData(){  
    return year_of_manufacture;
 }
  int putData(int x){
    return (year_of_manufacture=x);
  }
}
final class FourWheeler extends vehicle{
  int getData(){
    return year_of_manufacture;
  }
  int putData(int x){
    return(year_of_manufacture=x);
  }
}

class MyTwoWheeler extends TwoWheeler{
  int putData(int x){
    return(super.putData(x));
  }
  
}

public class vehicleabs{
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    MyTwoWheeler ob=new MyTwoWheeler();
    System.out.println("Enter the year of manufacture of two wheeler:");
    ob.putData(sc.nextInt());
    System.out.println("Year of manufacture of the two wheeler:"+ob.getData());
    FourWheeler fob=new FourWheeler();
    System.out.println("ENter the year of manufacture of the four wheeler:");
    fob.putData(sc.nextInt());
    System.out.println("Year of manufacture of the 4 wheeler:"+fob.getData());

  }
}

