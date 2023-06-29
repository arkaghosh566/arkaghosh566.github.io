//Tower of Hanoi
public class prog_50 
{
    public static void main(String[] args)
    {
        int count =2;
        tower(count,'A','B','C');
    }    
    public static void tower(int first,char d1,char T,char d2)
    {
        if(first ==1)
            System.out.println("Disk1 from "+d1+" to "+d2);
        else
        {
            tower(first-1, d1, d2, T);
            System.out.println("Disk"+first+" from "+d1+" to "+d2);
            tower(first-1,T,d1,d2);
        }
    }
}
