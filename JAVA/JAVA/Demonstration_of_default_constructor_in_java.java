//Demonstration of default constructor
class Default
{
    Default()
    {
        System.out.println("This is the default Constructor of Default class");
        long a =365233;
        System.out.println("Operating wihtin the default constructor to print the Data member values");
        System.out.println("Value of a is : "+a);
    }
}
public class prog_56 
{
    public static void main(String[] args)
    {
        new Default();
        // obj.Default();
    }    
}
