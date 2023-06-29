//Calculating sum or product of given range
import java.util.*;
public class prog_30 
{
    public static void main(String[] args)
    {
        System.out.println("Enter any no. : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Choose\n1)Print the sum\n2)Print the product");
        int c =sc.nextInt();
        int i,sum=0,pro=1;
        switch(c)
        {
            case 1:
                for(i=0;i<=n;sum +=(i++));
                System.out.println(sum);
                break;
            case 2:
                for(i=1;i<=n;pro *=(i++));
                System.out.println(pro);
                break; 
            default:
                System.out.println("Invalid Choice");
        
        }
        sc.close();
    }    
}
