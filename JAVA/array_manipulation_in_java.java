import java.util.Scanner;
public class Main
{
    static int index_even(int x)
    {
        return x*2;
    }
    static int index_odd(int x)
    {
        return x+1;
    }
	public static void main(String[] args) 
	{
		Scanner in=new Scanner(System.in);
        System.out.print("Enter the array size:");
        int n=in.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.printf("Enter the element in %d-th position:",i);
            a[i]=in.nextInt();
        }
        System.out.println("The user entered array before manipulation is");
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        System.out.println("\nThe user entered array after manipulation is");
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                System.out.print(index_odd(a[i])+" ");
            }
            else if(i%2==0)
            {
                System.out.print(index_even(a[i])+" ");
            }
        }
	}
}