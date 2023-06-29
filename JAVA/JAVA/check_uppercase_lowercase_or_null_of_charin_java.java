/*taking char as i/p & print either 1,0,-1 according to the folllowing
 1, if the char is an uppercase alphabet.
 0, if the char is a lowercase alphabet.
 -1,if the char is not an alphabet.
*/
import java.util.Scanner;
public class prog_19 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);
        if(ch >= 'A' && ch<='Z')
            System.out.println("1");
        else if(ch >= 'a' && ch<='z')
            System.out.println("0");
        else
            System.out.println("-1");
        sc.close();
    }    
}
