//Demonstration of logical operators using conditional statement branching
public class prog_18 
{
    public static void main(String[] args)
    {
        boolean a =true;
        boolean b =false;
        System.out.println("For logical AND : ");
        if(a && b)
            System.out.println("Y");
        else
            System.out.println("R");
        System.out.println("For logical OR : ");
        if(a || b)
            System.out.println("Y");
        else
            System.out.println("R"); 
        System.out.println("For logical NOT : ");
        System.out.println("NOT of a is : "+!a);
        System.out.println("NOT of b is : "+!b);
    }  
}
