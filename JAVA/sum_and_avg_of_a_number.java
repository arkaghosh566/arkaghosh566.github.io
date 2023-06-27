// Write a program to calculate the sum and the average of the numbers occurring in the multiplication table of 225860.

public class Main
{
	public static void main(String[] args) 
	{
		int num=225860;
		int length=0;
		int s=0;
		int sum=0;
		float avg;
		while(num!=0)
		{
		    s=num%10;
		    sum=sum+s;
		    num=num/10;
		    length++;
		}
		avg=sum/length;
		System.out.printf("The sum and the average of the numbers occurring in the multiplication table of 225860 is:"+sum+" & "+avg);
	}
}