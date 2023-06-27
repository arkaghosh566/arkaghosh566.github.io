// Evaluate the following expressions using Java program by taking user inputs: ((b^2- 4ac)+(b^2+ 4ac))^2 / 2ab.
import java.util.Scanner;
import java.lang.Math;
public class Main
{
	public static void main(String[] args) 
	{
	    Scanner obj1=new Scanner(System.in);
	    Scanner obj2=new Scanner(System.in);
	    Scanner obj3=new Scanner(System.in);
	    System.out.println("Enter the value of a:");
	    int a=obj1.nextInt();
	    System.out.println("Enter the value of b:");
	    int b=obj2.nextInt();
	    System.out.println("Enter the value of c:");
	    int c=obj2.nextInt();
	    double result1=((Math.pow(b,2)-4*a*c)+(Math.pow(b,2)+4*a*c));
	    double result=Math.pow(result1,2)/(2*a*b);
		System.out.println("Result:"+result);
	}
}
