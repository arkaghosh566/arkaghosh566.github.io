//Trunk calls were highly popular medium of distance communication from 1930s to 1980s.
//This is a java program to emulate the trunk calls of a telephone exchange. A trunk call can be ordinary , urgent or lightning.
//The charges depend on the duration and the type of the call. Write a java program using the concept of polymorphism in java to emulate the trunk calls.
import java.util.*;
class call
{
    float dur;
    String type;
    float rate()
    {
        if(type.equals("urgent"))
            return 4.5f;
        else if(type=="lightning")
            return 3.5f;
        else
            return 3f;
    }
}
class bill extends call
{
    float amount;
    Scanner sc=null;
    bill()
    {
        try
        {
            sc=new Scanner(System.in);
        }
        catch(Exception e)
        { 
            System.out.println(e); 
        }
    }
    void read()throws Exception
    {
        String s;
        System.out.println("enter call type(urgent,lightning,ordinary):");
        type=sc.nextLine();
        System.out.println("enter call duration:");
        s=sc.nextLine();
        dur=Float.valueOf(s).floatValue();
    }
    void calculate()
    {
        if(dur<=1.5)
            amount=rate()*dur+1.5f;
        else if(dur<=3)
            amount=rate()*dur+2.5f;
        else if(dur<=5)
            amount=rate()*dur+4.5f;
        else
            amount=rate()*dur+5f;
    }
    void print()
    {
        System.out.println("**********************");
        System.out.println(" PHONE BILL ");
        System.out.println("**********************");
        System.out.println(" Call type : "+type);
        System.out.println(" Duration : "+dur);
        System.out.println(" CHARGE : "+amount);
        System.out.println("**********************");
    }
}
class prog_61
{
    public static void main(String arg[])throws Exception
    {
        bill b=new bill();
        b.read();
        b.calculate();
        b.print();
    }
}