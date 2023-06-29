//Array merging
public class prog_35
{
    public static void main(String[] args)
    {
        int a[]={1,2};
        int b[]={3,4};
        int al=a.length;
        int bl=b.length;
        int c[] = new int[al + bl];
        for(int i=0;i<al;c[i]=a[i++]);
        for(int i=0;i<bl;c[i+al]=b[i++]);
        for(int i=0;i<al+bl;System.out.println(c[i++]));
    }
}
