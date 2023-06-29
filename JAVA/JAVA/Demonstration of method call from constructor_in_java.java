//Demonstration of method call from constructor
class calculate
{
    int sum(int a,int b)
    {
        return a+b;
    }
}
public class prog_45
{
    public static void main(String[] args)
    {
        calculate obj = new calculate();
        int c = obj.sum(10,7);
        System.out.println(c);
    }
}