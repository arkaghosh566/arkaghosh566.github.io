class Employee
{
    int id,salary;
    String name;
    public void PrintDetails()
    {
        System.out.println("Your Emp ID is : "+id);
        System.out.println("Your name is : "+name);
    }
    public int getSalary()
    {
        return salary;
    }
}
public class prog_52 
{
    public static void main(String[] args)
    {
        Employee GH = new Employee();
        Employee YB = new Employee();
        GH.id=10024;
        GH.salary=1000026;
        GH.name="Geoffrey E. Hinton";
        YB.id=10042;
        YB.salary=1000062;
        YB.name="Yoshua Bengio";
        System.out.println("\n");
        GH.PrintDetails();
        YB.PrintDetails();
        int salary1 = GH.getSalary();
        int salary2 = YB.getSalary();
        System.out.println("Geoffrey E. Hinton : "+salary1);
        System.out.println("Yoshua Bengio : "+salary2);
    }    
}
