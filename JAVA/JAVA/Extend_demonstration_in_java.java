class First
{
    int a;
    public int getA()
    {
        return a; 
    }
    First(int a)
    {
        this.a = a;
    }
    public int returnOne()
    {
        return 1;
    }
}
class Second extends First
{
    Second(int c)
    {
        super(c);
        System.out.println("This is a constructor \n");
    }
}
public class prog_65 
{
    public static void main(String[] args)
    {
           First e = new First(1024);
           Second d = new Second(5);
           System.out.println(e.getA());
           System.out.println(d.getA());
    }   
}
