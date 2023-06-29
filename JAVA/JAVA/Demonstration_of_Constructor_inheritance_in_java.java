//Demonstration of Constructor inheritance
class Base1
{
    Base1()
    {
        System.out.println("Base Class Constructor");
    }
    Base1(int x)
    {
        System.out.println("Parameterized Base Class Constructor");
    }
}
class Derived1 extends Base1
{
    Derived1()
    {
        System.out.println("Derived Class Constructor");
    }
    Derived1(int x,int y)
    {
        super(x);
        System.out.println(" Parameterized Derived Class Constructor");
    }
}
class ChildOfDerived extends Derived1
{
    ChildOfDerived()
    {
        System.out.println("Child of Derived Class Constructor");
    }
    ChildOfDerived(int x,int y,int z)
    {
        super(x,y);
        System.out.println(" Parameterized Child of Derived Class Constructor");
    }
}
public class prog_63
{
    public static void main(String args[])
    {
        new ChildOfDerived(2,13,15);
    } 
}
