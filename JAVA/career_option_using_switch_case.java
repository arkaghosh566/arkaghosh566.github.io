// Write a Java program where the program will ask the user whether he/she wants to study AI & ML or IOT Cybersecurity. 
// For both the options show further career choices as: AI Engineer, NLP Scientist, Data Scientist, Computer Vision Scientist,
// and on the other side: IOT Engineer, Network Administrator, Cybersecurity Expert, Ethical Hacker.
import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
	    System.out.println(" 1.AI & ML \n 2.IOT Cybersecurity");
		System.out.print("Enter your choice of subject:");
		Scanner sc=new Scanner(System.in);
		int ch=sc.nextInt();
		switch(ch)
		{
		    case 1:
		        System.out.println("Career choices: \n 1)AI Engineer \n 2)NLP Scientist \n 3)Data Scientist \n 4)Computer Vision Scientist");
		        break;
		    case 2:
		        System.out.println("Career choices: \n 1)IOT Engineer \n 2)Network Administrator \n 3)Cybersecurity Expert \n 4)Ethical Hacker");
		        break;
		    default:
		        System.out.println("Select from the given options");
		}
	}
}