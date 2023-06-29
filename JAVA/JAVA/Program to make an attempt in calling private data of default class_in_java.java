//Java program to make an attempt in calling private data of default class.
class Employee2
{
    int id;
    String name;
    // private String Dept = "Dev";
}
public class prog_53_54 
{
    public static void main(String[] args)
    {
        Employee2 emp = new Employee2();
        emp.id=10024;
        emp.name = "Richard Feyman";
    }    
}
