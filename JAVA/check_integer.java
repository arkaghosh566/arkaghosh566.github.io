//Write a Java program to detect whether a number entered by the user is an integer or not.
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)   
	{ 
		String input = "1234ab";           
		try 
		{ 
			Integer.parseInt(input); 
			System.out.println(input + " is a valid integer"); 
		}  
		catch (NumberFormatException e)  
		{ 
			System.out.println(input + " is not a valid integer"); 
		} 
	}
}

