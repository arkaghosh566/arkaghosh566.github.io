import java.util.Scanner;
import java.util.Arrays;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner in=new Scanner(System.in);
		System.out.print("Enter the array length:");
		int n=in.nextInt();
		int a[]=new int[n];
		int s[]=new int[n];
		System.out.println("Enter the array elements:");
		for(int i=0;i<n;i++)
		{
		    a[i]=in.nextInt();
		    s[i]=a[i];
		}
		System.out.println("\nThe entered array is:");
		for(int i=0;i<n;i++)
		{
		    System.out.print(a[i]+" ");
		}
		for(int i=0;i<n;i++)
		{
		    for(int j=i+1;j<n;j++)
		    {
    		    if(s[i]==s[j] && j!=(n-1))
    		    {
    		        for(int k=j;k<n;k++)
    		        {
    		            s[k]=s[k+1];
    		        }
    		        n--;
    		    }
    		    else
    		    {
    		        n--;
    		    }
		    }
		}
		System.out.println();
		for(int i=0;i<n;i++)
		{
		    System.out.print(s[i]+" ");
		}
		int c[]=new int[n];
		for(int i=0;i<n;i++)
		{
		    int count=0;
		    for(int j=0;j<a.length;j++)
		    {
		        if(s[i]==a[j])
		        {
		            count++;
		        }
		    }
		    c[i]=count;
		}
		System.out.println("\nArray element --> Occurence");
		for(int i=0;i<n;i++)
		{
		    System.out.println("\t    "+s[i]+" --> "+c[i]);
		}
		int temp1=0;
		int temp2=0;
		for(int i=1;i<n;i++)
		{
		    if(s[i] < s[i-1] )
            {
                temp1=s[i];
                temp2=c[i];
                s[i]=s[i-1];
                c[i]=c[i-1];
                s[i-1]=temp1;
                c[i-1]=temp2;
                i=0;
            }
		}
		System.out.println("After sorting the array is:");
		for(int i=0;i<n;i++)
		{
		    while(c[i]!=0)
		    {
		        System.out.print(s[i]+" ");
		        c[i]--;
		    }
		}
	}
}


