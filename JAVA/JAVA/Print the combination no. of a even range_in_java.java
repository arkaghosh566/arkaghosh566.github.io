//Print the combination no. of a even range
import java.util.*;
public class prog_29 
{
    public static void main(String[] args)
    {
        System.out.println("Enter the range :");
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j<n;System.out.println((j++)*2+1 +" "));
            for(int k=0;k<i-1;System.out.println((k++)*2+1 +" "));
            System.out.println();
        }
        sc.close();
    }        
}
