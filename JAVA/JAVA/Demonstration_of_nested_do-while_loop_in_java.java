//Demonstration of nested do-while loop
public class prog_26 
{
    public static void main(String[] args)
    {
        int a=100;
        do
        {
            if(a<100)
            {
                System.out.println("First while loop !");
                System.out.println(a);
                a++;
            }
            else
                System.out.println("Invalid value range");
            do
            {
                System.out.println("Second while loop !");
                System.out.println(a);
            }while(false);
        }while(false);
    }    
}
