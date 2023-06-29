//Reading a message  and a secret key from the user crypting the message using ceasor cipher , Shifting each other.
import java.util.*;
public class prog_16 
{
    public static void main(String[] args)
    {
        Scanner Console = new Scanner(System.in);
        String message = Console.nextLine();
        message = message.toLowerCase();
        System.out.print("Your secret message : ");
        int key = Console.nextInt();
        encode(message,key);
        Console.close();
    }
    public static void encode(String text ,int Shift)
    {
        System.out.print("The encoded message :");
        for(int i=0;i<text.length();i++)
        {
            char letter =text.charAt(i);
            if(letter>='a' && letter <='z')
            {
                letter = (char)(letter + Shift);
                if(letter > 'z')
                    letter = (char)(letter - 26);
                else if(letter <'a')
                    letter = (char)(letter +26);
            }
            System.out.print(letter);
        }
        System.out.println();
    }
}
