//Write a Java program to print the following pattern:
//  *
//  * *
//  * * *
//  * * *
//  * * * *
//  * * *
//  * * *
//  * *
//  *
import java.util.Scanner;
class Main 
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the value of n:");
		int n=sc.nextInt();
		for(int i=1; i<=n; i++)
		{
		    if(i<=n)
		        {
    		        if(i%2!=0 && i!=1)
    		        {
    		            for(int j=1; j<=i; j++)
    		            {
    		                System.out.print("*");
    		            }
    		            System.out.println();
    		            for(int j=1; j<=i; j++)
    		            {
    		                System.out.print("*");
    		            }
    		            System.out.println();
    		        }
    		        else
    		        {
    		            for(int j=1; j<=i; j++)
    		            {
    		                System.out.print("*");
    		            }
    		            System.out.println();
    		        }
		        }
		}
		for(int i=n-1; i>=1; i--)
		{
		    if(i%2!=0 && i!=1)
		    {
		        for(int j=i; j>=1; j--)
    		    {
    		        System.out.print("*");
    		    }
    		    System.out.println();
    		    for(int j=i; j>=1; j--)
    		    {
    		        System.out.print("*");
    		    }
    		    System.out.println();
		    }
    		else
    		{
    		    for(int j=i; j>=1; j--)
    		    {
    		        System.out.print("*");
    		    }
    		    System.out.println();
    		}
		}
	}
}

