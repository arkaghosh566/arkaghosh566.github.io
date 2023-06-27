// Write a Java program to find out whether a student is passes or fails; 
// consider it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
		System.out.print("Enter the number of subjects:");
	    float total_rec=0;
	    Scanner obj1=new Scanner(System.in);
	    Scanner obj2=new Scanner(System.in);
	    Scanner obj3=new Scanner(System.in);
	    int n=obj3.nextInt();
	    System.out.print("Enter the full marks of each subject:");
	    int toal_per_sub=obj3.nextInt();
		String[] subjects=new String[n];
		float[] marks=new float[n];
		int count=0;
		for(int i=0;i<n;i=i+1)
		{
		    System.out.print("Enter the subject:");
		    subjects[i]=obj2.nextLine();
		    System.out.print("Enter the marks of "+subjects[i]+" is:");
		    marks[i]=obj1.nextFloat();
		    if(marks[i]>=(.33*toal_per_sub))
		    {
		        count=count+1;
		    }
		    total_rec=total_rec+marks[i];
		}
		float per;
		per=((total_rec*100)/(n*toal_per_sub));
		System.out.printf("\nThe percentage of "+n+" subjects is:"+per);
		if(per>=40 && count==n)
		{
		    System.out.println("\nPassed");
		}
		else
		{
		    System.out.println("\nFailed");
		}
	}
}