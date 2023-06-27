import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.print("Enter the array size:");
        int n=in.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.printf("Enter the element in %dth position:",i);
            a[i]=in.nextInt();
        }
        System.out.println("The Entered array is:");
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
            }
        }
        System.out.print("\nThe largest element in the bitonic array is:"+max);
    }
}