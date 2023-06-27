import java.util.Arrays;
import java.util.Scanner;
class n_largest
{
    int nth_largest(int a[],int n,int n_th)
    {
        Arrays.sort(a);
        int nth_max=a[n-n_th];
        return nth_max;
    }
}
class n_smallest
{
    int nth_smallest(int a[],int n,int n_th)
    {
        Arrays.sort(a);
        int nth_min=a[n_th-1];
        return nth_min;
    }
}
class Main
{
    public static void main(String args[]) 
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
        System.out.println("The user entered array is");
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        System.out.print("\nEnter which largest element to searched:");
        int n_th_max=in.nextInt();
        System.out.print("\nEnter which smallest element to searched:");
        int n_th_min=in.nextInt();
        in.close();
        n_largest max=new n_largest();
        int ma=max.nth_largest(a,n,n_th_max);
        n_smallest min=new n_smallest();
        int mi=min.nth_smallest(a,n,n_th_min);
        System.out.println("The "+n_th_max+"_th largest value is "+ma);
        System.out.print("The "+n_th_min+"_th smallest value is "+mi);
    }
}