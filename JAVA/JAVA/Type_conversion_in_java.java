//Type conversion
public class prog_11 
{
    public prog_11()
    {
        int j = 10;
        int k = 5;
        k = j ;
        System.out.println("j is : "+j);
        System.out.println("k is : "+k);
        // Integer i1 = new Integer("1");
        // Integer i2 = new Integer("2");
        // System.out.println("i1 is : "+i1);
        // System.out.println("i2 is : "+i2);
        // i1 = i2;
        // System.out.println("i1 is : "+i1);
        // System.out.println("i2 is : "+i2);
        k=j=10;
        System.out.println("j is : "+j);
        System.out.println("k is : "+k);
    } 
    public static void main(String[] args)
    {
        new prog_11();
    }  
} 
