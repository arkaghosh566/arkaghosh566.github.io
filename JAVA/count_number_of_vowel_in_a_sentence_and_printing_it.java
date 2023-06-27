// Write a Java program to count the number of vowels from any user input sentences. Print the vowels.
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		int vcount=0;
		for(int i=0; i<str.length(); i++)
		{
		    if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u' || str.charAt(i) == 'A' || str.charAt(i) == 'E' || str.charAt(i) == 'I' || str.charAt(i) == 'O' || str.charAt(i) == 'U')
		    {
		        System.out.print(str.charAt(i));
		        vcount++;
		    }
		}
		System.out.print("\nThe number of vowel(s) in the sentence is:"+vcount);
	}
}


