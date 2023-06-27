// Write a Java program to show the two strings are anagram or not.

import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
		String str1=sc.nextLine();
		String str2=sc.nextLine();
		System.out.println("The two strings are:"+str1+" & "+str2);
		char[] char1=str1.toCharArray();
		char[] char2=str2.toCharArray();
		Arrays.sort(char1);
        Arrays.sort(char2);
		if(str1.length()==str2.length() && Arrays.equals(char1,char2))
		{
		    System.out.print("Strings are anagrams");
		}
		else
		{
		    System.out.print("Strings are not anagrams");
		}
	}
}

