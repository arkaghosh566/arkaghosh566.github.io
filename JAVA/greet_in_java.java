//Write a Java program that asks the user to enter his/her name and greets them with “Hello, you are coding for PCC-CS593 Lab.” message.
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
	    String name;
		System.out.println("ENTER YOUR NAME:");
		Scanner obj=new Scanner(System.in);
		name=obj.nextLine();
		System.out.println("Hello,"+name+"\nYou are coding for PCC-CS593 Lab.");
	}
}

