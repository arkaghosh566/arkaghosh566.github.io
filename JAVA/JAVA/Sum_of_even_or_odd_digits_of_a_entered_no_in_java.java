//Sum of even or odd digits of a entered no.
import java.util.Scanner;
public class prog_24 
{
    public static void main(String[] agrs)
    {
        System.out.println("Enter a no. : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int evensum=0;
        int oddsum=0;
        while(n != 0)
        {
            int temp = n%10;
            n =n/10;
            if(temp %2 ==0)
                evensum += temp;
            if(temp%2 != 0)
                oddsum +=temp;
        }
        System.out.println("Evensum : "+evensum);
        System.out.println("Oddsum : "+oddsum);
        sc.close();
    }
}
