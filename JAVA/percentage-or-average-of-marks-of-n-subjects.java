// Write a program to calculate the percentage of a given student in the 10th board exam. 
// His marks from 5 subjects must be taken as input from the keyboard. (Marks are out of 100).
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
	    System.out.print("Enter the number of subjects:");
	    int total=0;
	    Scanner obj1=new Scanner(System.in);
	    Scanner obj2=new Scanner(System.in);
	    int n=obj1.nextInt();
		String[] subjects=new String[n];
		int[] marks=new int[n];
		for(int i=0;i<n;i=i+1)
		{
		    System.out.print("Enter the subject:");
		    subjects[i]=obj2.nextLine();
		    System.out.print("Enter the marks of "+subjects[i]+" is:");
		    marks[i]=obj1.nextInt();
		    total=total+marks[i];
		}
		int per;
		per=(total/n);
		System.out.println("The percentage of "+n+" subjects is:"+per);
	}
}