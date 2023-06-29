//Method overloading by changing return type of the method
public class prog_47 
{
    int multiply(int a , int b)
    {
        return a*b;
    }    
    double multiply(double a, double b)
    {
        return a*b; 
    }
    public static void main(String[] args )
    {
        prog_47 o = new prog_47();
        int c = o.multiply(5,4);
        double d = o.multiply(5.1,4.2);
        System.out.println("Multiply integer : "+c);
        System.out.println("Multiply double : "+d);
    }
}
