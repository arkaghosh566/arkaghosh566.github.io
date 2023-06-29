//Print first X terms of the series 3N+2 which are not multiples of 4
import java.util.*;
public class prog_28 
{
    public static void main(String[] args)
    {
        System.out.println("Enter the no.of terms :");
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int count =0;
        for(int i=1;count<n;i++)
        {
            int ap =3*i +2;
            if(ap%4 !=0)
            {
                System.out.println(ap+" ");
                count++;
            }
        }
        sc.close();
    }
}
