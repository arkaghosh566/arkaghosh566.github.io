// Write a Java program to calculate the total salary of a person. The user has to enter the basic salary as double value, and 
// depending upon which the total salary will be calculated as: TotalSalary = (Basic + HRA + DA) – PF, 
// where HRA = 30% of total salary, DA = 100% of total salary, and PF is ₹ 3,000. 
// If the total salary is ≥ ₹ 50,000, show Grade A, for ≥ ₹ 30,000, show Grade B, and for ≤ ₹ 20,000, show Grade C.
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
	    System.out.println("Enter the basic salary:");
	    Scanner sc=new Scanner(System.in);
		double basic_salary=sc.nextInt();
		double total_salary=(30000-(10*basic_salary))/3;
		if(total_salary>=50000)
		{
		    System.out.println("Grade A");
		}
		else if(total_salary>=30000)
		{
		    System.out.println("Grade B");
		}
		else if(total_salary<=20000)
		{
		    System.out.println("Grade C");
		}
	}
}