//Demonstration of variable argument
public class prog_49 
{
    static int add(int... vargs)
    {
        int results=0;
        for(int a : vargs)
            results +=a;
        return results;
    }
    public static void main(String[] args)
    {
        System.out.println(add(1,2)+"\n"+add(2,3,4)+"\n"+add(4,5,6));
    }
}
