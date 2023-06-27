import java.util.Scanner;
class Bubble_Sort
{
    void BS_ascending(int arr[],int n) 
    {
        int temp = 0;  
        for(int i=0; i < n; i++)
        {
            for(int j=1; j < (n-i); j++)
            {  
                if(arr[j-1] > arr[j])
                {  
                    temp = arr[j-1];  
                    arr[j-1] = arr[j];  
                    arr[j] = temp;
                }
            }  
        }
    }
    void BS_Descending(int arr[],int n) 
    {
        int temp = 0;  
        for(int i=0; i < n; i++)
        {
            for(int j=1; j < (n-i); j++)
            {  
                if(arr[j-1] < arr[j])
                {  
                    temp = arr[j];  
                    arr[j] = arr[j-1];  
                    arr[j-1] = temp;
                }
            }  
        }
    }
}
public class Main
{
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
        in.close();
        System.out.println("The user entered array before sorting is:");
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        Bubble_Sort BS=new Bubble_Sort();
        BS.BS_Descending(a,n); 
        System.out.println("\nArray After Bubble Sort in Descending order is:");  
        for(int i=0;i<n;i++)
        {  
            System.out.print(a[i] + " ");
        }
        BS.BS_ascending(a,n); 
        System.out.println("\nArray After Bubble Sort in Ascending order is:");  
        for(int i=0;i<n;i++)
        {  
            System.out.print(a[i] + " ");
        }
	}
}


