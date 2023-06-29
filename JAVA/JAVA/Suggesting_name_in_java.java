//Suggesting baby name by their parent's name
import java.util.*;
public class prog_15 
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Parent 1 first name: ");
        String name1 = s.next();
        System.out.println("parent 2 first name: ");
        String name2 = s.next();
        System.out.println("Child's Gender : ");
        String gender = s.next();
        String halfName1 = gethalfname(name1);
        String halfName2 = gethalfname(name2);
        String name ="";
        if(gender.toLowerCase().startsWith("male"))
            name = halfName1 + halfName2;
        else
            name = halfName2 + halfName1;
        System.out.println("Suggested name : "+name.toUpperCase());
        s.close();
    }
    public static String gethalfname(String name)
    {
        int halfIndex = name.length()/2;
        String half = name.substring(0,halfIndex);
        return half;
    }
}
