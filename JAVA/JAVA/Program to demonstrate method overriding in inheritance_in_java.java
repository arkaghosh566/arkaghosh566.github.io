//Java program to demonstrate method overriding in inheritance
class A
{
    public int a;
    public int method1()
    {
        return 3;
    } 
    public void method2()
    {
        System.out.println("This is method 2 of Class A");
    }
    public void method3()
    {
        System.out.println("This is method 3 of Class A");
    }
}
class B
{
    public int a;
    public int method1()
    {
        return 4;
    } 
    public void method2()
    {
        System.out.println("This is method 2 of Class B");
    }
    public void method3()
    {
        System.out.println("This is method 3 of Class B");
    }
}
public class prog_64 
{
    public static void main(String[] args) 
    {
        A a = new A();
        a.method2();
        B b = new B();
        b.method2();
    }    
}
