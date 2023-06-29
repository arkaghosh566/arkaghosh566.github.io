//Megabyte to equivalent kilobyte convertion
public class prog_20 
{
    public static void main(String[] args)
    {
        printKbToMbAndKb(5000);
        printKbToMbAndKb(2500);
        printKbToMbAndKb(1124);
        printKbToMbAndKb(0);
    }    
    public static void printKbToMbAndKb(int Kb)
    {
        if(Kb <0)
            System.out.println("Invalid value");
        else if(Kb>0)
        {
            long result = (long) ((long)Kb / (long) 1024.0);
            int rem = Kb % 1024;
            System.out.println(Kb+"KB "+"= "+result+"MB and "+rem+"KB");
        }
        else
            System.out.println("0KB = 0MB and 0KB");
    }
}
