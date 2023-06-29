//Demonstration of expression looping using normal iteration vs recursion
public class prog_51
{
    public static void main(String[] args)
    {
        Rec r = new Rec(5);
        System.out.println("Iterative");
        r.start_iteration();
        System.out.println("Recursive");
        r.start_recursion();
        Factorial fr = new Factorial(5);
        System.out.println("Iterative");
        fr.start_iteration();
        System.out.println("Recursive");
        fr.start_recursion();
        System.out.printf("1! = %d\n2! = %d\n10! = %d\n",prog_51.Factorial(1),prog_51.Factorial(2),prog_51.Factorial(10));
    }  
    public static int Factorial(int n)
    {
        if(n==0 || n==1)
            return 1;
        else
            return prog_51.Factorial(n-1)*n;
    }  
}
class Rec
{
    int stop;
    public Rec(int s)
    {
        this.stop = s;
    }
    public Rec()
    {
        this.stop = 0;
    }
    public void start_iteration()
    {
        for(int i=0;i<=this.stop;System.out.println("Hello World "+Integer.toString(i++)));
    }
    public void start_recursion(int limit)
    {
        if(limit<=this.stop)
        {
            System.out.println("Hello World "+Integer.toString(limit));
            this.start_recursion(limit+1);
        }
    }
    public void start_recursion()
    {
        this.start_recursion(0);
    }
}
class Factorial extends Rec
{
    int rec_temp;
    public Factorial(int s)
    {
        this.stop=s;
    }
    public void start_iteration()
    {
        int val=1;
        for(int i=0;i<this.stop;val*= i++);
        System.out.printf("Iterative foctorial for %d = %d \n",this.stop,val);
    }
    public void start_recursion(int val, int result)
    {
        if(val == 0 || val ==1)
        {
            System.out.printf("Recursive factorial %d = %d\n",this.stop,result);
            return;
        }
        else
            this.start_recursion(val-1,result*(val));
    }
    public void start_recursion()
    {
        this.start_recursion(this.stop,1);
    }
}