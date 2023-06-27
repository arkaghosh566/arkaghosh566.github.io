import java.util.Scanner;
class Main
{
    static void sort_012(int a[], int n)
    {
        int start=0;
        int end=n-1;
        int mid=0,temp=0;
        while (mid <= end) 
        {
            switch (a[mid]) 
            {
                case 0: 
                        {
                            temp = a[start];
                            a[start] = a[mid];
                            a[mid] = temp;
                            start++;
                            mid++;
                            break;
                        }
                case 1:
                        mid++;
                        break;
                case 2: 
                        {
                            temp = a[mid];
                            a[mid] = a[end];
                            a[end] = temp;
                            end--;
                            break;
                        }
            }
        }
    }
    static void print_array(int a[], int n)
    {
        System.out.println();
        for (int i = 0;i<n;i++)
        {
            System.out.print(a[i] + " ");
        }
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
		System.out.print("Enter the array length:");
		int n=in.nextInt();
		int a[]=new int[n];
		System.out.println("Enter the array elements:");
		for(int i=0;i<n;i++)
		{
		    a[i]=in.nextInt();
		}
		System.out.println("\nThe entered array is:");
		for(int i=0;i<n;i++)
		{
		    System.out.print(a[i]+" ");
		}
        sort_012(a,n);
        print_array(a,n);
    }
}
