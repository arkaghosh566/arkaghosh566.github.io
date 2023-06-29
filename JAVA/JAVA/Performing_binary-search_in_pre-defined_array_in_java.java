//Performing binary search in pre-defined array
public class prog_41 
{
    public static void main(String[] args)
    {
        int arr[]= {2, 5, 9, 17, 33, 65, 129, 257, 513, 1025};
        int find= 33;
        System.out.println(binarySearch(arr,find));
    }
    public static int binarySearch(int [] a, int k)
    {
        int min = 0;
        int max = a.length-1;
        while(min<=max)
        {
            int mid = (min+max)/2;
            if(k<a[mid]) max=mid-1;
            else if(k>a[mid]) min=mid+1;
            else return mid; 
        }
        return -1;   
    }
}
