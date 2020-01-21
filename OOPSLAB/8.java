//8.Circle:
import java.util.*;
class Circle {
  double radius;
  Circle(double radius){
    this.radius=radius;
  }
  double areaOfcircle(){
    return(3.14*radius*radius);
  }
}

class sector extends Circle{
  double angle;
  sector(double rad,double angle){
    super(rad);
    this.angle=angle;
  }
  double areaOfsector(){
    return(0.5*(radius*radius)*angle);
  }
}

class segment extends Circle{
  double h;
  segment(double rad,double length){
    super(rad);
    h=length;
  }
  double areaOfsegment(){
    double d=(radius-h)/h;
    double m=Math.pow((2*radius*h)-(h*h),(1/2));
    return((radius*radius)*d-(radius-h)*m);
  } 
}

class circle{
  public static void main(String args[]){ 
    Scanner sc=new Scanner(System.in);
   System.out.println("Enter the radius of the circle:");
    Circle ob1=new Circle(sc.nextDouble());
    System.out.println("Area of circle:"+ob1.areaOfcircle());
   System.out.println("Enter the radius and angle in radians:");
    sector ob2=new sector(sc.nextDouble(),sc.nextDouble());
    System.out.println("Area of the sector:"+ob2.areaOfsector());
   System.out.println("Enter the radius and length:");
    segment ob3=new segment(sc.nextDouble(),sc.nextDouble());
    System.out.println("Area of segment:"+ob3.areaOfsegment());
  }
}

