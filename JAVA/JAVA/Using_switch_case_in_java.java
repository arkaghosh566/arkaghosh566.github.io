//Taking name & age and then show their experience
import java.util.Scanner;
public class prog_21 
{
    public static void main(String[] args)
    {
        String var ="S";
        switch(var)
        {
            case "A": 
                System.out.println("Hello A");
                break;
            case "S":
                System.out.println("Hello S");
                break; 
            case "R": 
                System.out.println("Hello R");
                break;
            default: 
                System.out.println("Sorry, We don't have your information!");
        }
        int age;
        System.out.println("Enter your age");
        Scanner sc = new Scanner(System.in);
        age = sc.nextInt();
        if(age>50)
            System.out.println("Closing to retirement");
        else if(age>40)
            System.out.println("Mid-level career");
        else if(age>30)
            System.out.println("Seni-experienced");
        else
            System.out.println("early career");
        System.out.println("Have a nice day !");
        sc.close();
    }    
}
