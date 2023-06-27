import java.util.Scanner;
public class Main 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the URL: ");
        String URL = sc.next();
        if(URL.endsWith(".edu"))
        {
            System.out.println("Educational Website.");
        }
        else if(URL.endsWith(".net"))
        {
            System.out.println("Networking Service Provider.");
        }
        else if(URL.endsWith(".info"))
        {
            System.out.println("Digital Information Repository.");
        }
        else if(URL.endsWith(".com"))
        {
            System.out.println("Commertial Website.");
        }
        else
        {
            System.out.println("Don't know.");
        }
    }
}