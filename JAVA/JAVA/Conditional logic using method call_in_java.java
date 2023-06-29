//Conditional logic using method call
public class prog_46 
{
    static int logic(int x ,int y)
    {
        int z;
        if(x>y)
            z=x+y;
        else
            z=(x+y)*5;
        return z;
    }
    public static void main(String[] args)
    {
        int a=5, b=7, c;
        c = logic(a,b);
        System.out.println(c);
        int c1,a1=2,b1=1;
        c1 = logic(a1,b1);
        System.out.println(c1);
    }   
}
