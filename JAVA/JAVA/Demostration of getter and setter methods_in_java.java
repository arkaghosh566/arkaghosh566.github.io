//Demostration of getter and setter methods
class Scientist
{
    private int id;
    public int getId() 
    {
        return id;
    }
    public void setId(int id) 
    {
        this.id = id;
    }
    private String name;
    public String getName() 
    {
        return name;
    }
    public void setName(String name) 
    {
        this.name = name;
    }

}
public class prog_55 
{
    public static void main(String[] args)
    {
        Scientist emp = new Scientist();
        emp.setName("Supratip");
        System.out.println(emp.getName());
        emp.setId(1024);
        System.out.println(emp.getId());
    }    
}
