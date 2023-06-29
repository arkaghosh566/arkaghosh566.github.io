//String printing & average of 3 no.s
import java.util.*;
public class prog_8 
{
    //USER_I/P
    public static void main(int arg)
    {
        Scanner sc = new Scanner(System.in);
            String str = sc.next();
            int m1 = sc.nextInt();
            int m2 = sc.nextInt();
            int m3 = sc.nextInt();
            int avg = (m1 + m2 + m3)/3;
            System.out.println(str);
            System.out.println(avg);
        sc.close();
    }    
}
