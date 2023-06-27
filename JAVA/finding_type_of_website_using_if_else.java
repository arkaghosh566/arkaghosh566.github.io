// Write a program to find out the type of website from the entered URL:
// .edu – Educational Website
// .net – Network Service Provider
// .info – Digital Information Repository
// .com – Commercial Website
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
	    System.out.println("Enter the url:");
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		int n=str.length();
		int index=0;
		char c;
		for(int i=(n-1);i>=0;i--)
		{
		    c=str.charAt(i);
		    String s=Character.toString(c);
		    if(s.equals("."))
		    {
		        index=i;
		        i=-1;
		    }
		}
		//System.out.println("Index of . is:"+index);
		//System.out.println("Size of string is:"+str.length());
		//String[] parts=str.split(".");
		String url=str.substring(index,n);
		//System.out.println(url);
		if(url.equals(".edu"))//either "string"=="string" or string.equals("string") but String=="string" not possible
		{
		    System.out.println("Educational Website");
		}
		else if(url.equals(".net"))
		{
		    System.out.println("Network Service Provider");
		}
		else if(url.equals(".info"))
		{
		    System.out.println("Digital Information Repository");
		}
		else if(url.equals(".com"))
		{
		    System.out.println("Commercial Website");
		}
	}
}


