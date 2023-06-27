// Write a Java program to show the anagram of any user input words.

import java.util.Scanner;
public class Main
{
    public static void print(char[] arr,int n)
    {
        for (int i=0; i<n; i++)
        {
            System.out.print(arr[i]);
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        Scanner st=new Scanner(System.in);
        System.out.print("Enter the string:");
        String str=st.nextLine();
        System.out.println();
        int n=str.length();
        char arr[]=new char[n];
        char temp;
        arr=str.toCharArray();
        for (int j = 1; j <= n; j++) 
        {
            for (int i = 0; i < n-1; i++) 
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                print(arr,n);
    	    }
        }
    }
}
