// Write a Java program to find out the nth term of the Fibonacci series F(n), where n is the user input, and F(n) is a function that is calculated 
// using the following formula: F(n) = F(n-1) + F(n-2). Here, F(1) = F(2) = 1
import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
		System.out.println("Enter the value of n:");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int f0=0,f1=1;
		int fn=0;
		if(n==0)
		{
		    System.out.println("The "+n+"th value of fibonacci series is:"+n);
		}
		else if(n==1 || n==2)
		{
		    System.out.println("The "+n+"th value of fibonacci series is:1");
		}
		else
		{
		    System.out.print("0 \t 1 \t");
		    for (int i=1;i<n;i++) 
		    {
		        fn=f0+f1;
		        f0=f1;
		        f1=fn;
		        System.out.print(fn+"\t");
		    }
		    System.out.print("\nThe "+n+"th value of fibonacci series is:"+fn);
		}
	}
}
