//Demostration of Parameterized constructors
class Parameterized
{
    Parameterized(int b,String s)
    {
        System.out.println("This is the parameterized constructor  of a default class");
        System.out.println("Operating wihtin the parameterized constructor to print the Data member values");
        System.out.println("This is the "+b+"th java class in "+s);
    }
}
public class prog_57 
{
    public static void main(String[] args)    
    {
        new Parameterized(5, "September");
    }
}