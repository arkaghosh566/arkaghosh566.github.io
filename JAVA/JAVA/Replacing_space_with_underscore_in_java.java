//Replacing space with underscore
public class prog_14
{
    public static void main(String[] args)
    {
        String name = "This is      a String    ";
        System.out.println(name);
        name.replace(" " , "_");
        System.out.println(name);
    }  
}
