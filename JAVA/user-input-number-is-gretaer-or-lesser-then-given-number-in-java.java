// Write a Java program to find out whether a given number is greater than the user entered number or not.
import java.util.Scanner;
public class Main
{
  public static void main (String[]args)
  {
    System.out.print("Enter a number:");
    Scanner sc = new Scanner (System.in);
    int num = sc.nextInt ();
    int randnum = (int) (Math.random () * 100);
    System.out.println ("The random number is:" + randnum);
    if(randnum>num)
    {
        System.out.println("Given number "+randnum+" is greater than "+num);
    }
    else
    {
        System.out.println("Given number "+randnum+" is lesser than "+num);
    }
  }
}
