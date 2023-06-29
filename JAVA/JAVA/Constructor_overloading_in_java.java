//Constructor overloading
class Employee_
{
    Employee_(String s,int i)
    {
        System.out.println("Name of the 1st person : "+s);
        System.out.println("ID of the 1st person : "+i);
    }
    Employee_(String s,int i,int salary)
    {
        System.out.println("Name of the 2nd person : "+s);
        System.out.println("ID of the 2nd person : "+i);
        System.out.println("Salary of the 2nd person : "+salary);
    }
}
public class prog_58 
{
    public static void main(String[] args)
    {
        new Employee_("GH", 1);
        new Employee_("YB", 2,20000);
    }    
}
