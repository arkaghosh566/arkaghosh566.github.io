//Find x^n(User i/p)
import java.util.Scanner;
public class prog_23 
{
    public static void main(String[] args)
    {
        System.out.println("Enter any no. :");
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        int temp =1;
        System.out.println("Enter the power : ");
        int n = sc.nextInt();
        while(n!=0)
        {
            temp *=x;
            n--;
        }
        System.out.println("The result is : "+temp);
        sc.close();
    }    
}
