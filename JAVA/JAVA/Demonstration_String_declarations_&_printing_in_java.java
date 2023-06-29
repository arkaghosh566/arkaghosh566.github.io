//Demonstration String declarations & printing
import java.util.*;
public class prog_13 
{
    public static void main(String[] args)
    {
        String name = new String("PCC-CS593\n");
        System.out.println("Paper code is :"+name);
        String a ="ODD SEMESTER 2022\n";
        System.out.println(a);
        String b = "AIML & IOT \n";
        System.out.println("OOP LAB FOR : "+b);
        Scanner sc = new Scanner(System.in);
        String st = sc.nextLine();
        System.out.println(st);
        sc.close();
    }    
}
