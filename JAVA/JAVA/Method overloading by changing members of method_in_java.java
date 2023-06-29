//Method overloading by changing members of method
public class prog_48 
{
    int multiply(int a , int b)
    {
        return a*b;
    }    
    int multiply(int a, int b,int c)
    {
        return a*b*c; 
    }
    public static void main(String[] args )
    {
        prog_48 o = new prog_48();
        int c = o.multiply(5,7);
        int d = o.multiply(5,4,6);
        System.out.println("Multiply of two no.s : "+c);
        System.out.println("Multiply of three no.s : "+d);
    }
}
