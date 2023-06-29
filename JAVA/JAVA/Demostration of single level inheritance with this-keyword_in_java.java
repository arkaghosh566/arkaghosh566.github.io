//Demostration of single level inheritance with "this" keyword
class Base
{
    public int x;

    public int getX() 
    {
        return x;
    }

    public void setX(int x) 
    {
        System.out.println("I am in BAse and Setting X now");
        this.x = x;
    }
    public void PrintMe()
    {
        System.out.println("I am a Constructor");
    }
}
class Derived extends Base
{
    public int y;

    public int getY() 
    {
        return y;
    }

    public void setY(int y) 
    {
        this.y = y;
    }
}
public class prog_59 
{
    public static void main(String[] args)
    {
        Base b = new Base();
        b.setX(2);
        System.out.println(b.getX());
        Derived d = new Derived();
        d.setY(3);
        System.out.println(d.getY());
    }    
}
