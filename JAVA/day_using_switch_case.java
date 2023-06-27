// Write a Java program to find out the day of the week given the number (1 for Monday, 2 for Tuesday … and so on.)

import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
	    System.out.println(" 1.Monday \n 2.Tuesday \n 3.Wednesday \n 4.Thursday \n 5.Friday \n 6.Saturday \n 7.Sunday");
		System.out.println("Enter a number from 1-7:");
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		switch(num)
		{
		    case 1:
		        System.out.println("IT IS MONDAY");
		        break;
		    case 2:
		        System.out.println("IT IS TUESDAY");
		        break;
		    case 3:
		        System.out.println("IT IS WEDNESDAY");
		        break;
		    case 4:
		        System.out.println("IT IS THURSDAY");
		        break;
		    case 5:
		        System.out.println("IT IS FRIDAY");
		        break;
		    case 6:
		        System.out.println("IT IS SATURDAY");
		        break;
		    case 7:
		        System.out.println("IT IS SUNDAY");
		        break;
		    default:
		        System.out.println("Wrong choice");
		}
	}
}
