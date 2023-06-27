//  Write a Java program to add all the ASCII values of any user input strings.
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		int ascii=0;
		int sum=0;
		for(int i=0; i<str.length(); i++)
		{
		    ascii=str.charAt(i);
		    System.out.print(ascii);
		    if(i!=(str.length()-1))
		    {
		        System.out.print("+");
		    }
		    sum=sum+ascii;
		}
		System.out.print("\nThe sum of ascii of the input string is:"+sum);
	}
}
