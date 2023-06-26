#include <stdio.h>
int binarySearch(int arr[], int lower, int upper, int x)
{
    if (upper>=lower)
    {
        int mid=lower+(upper-lower)/2;
        if (arr[mid]==x)
            return mid;
        if (arr[mid]>x)
            return binarySearch(arr, lower, mid - 1, x);
        return binarySearch(arr, mid + 1, upper, x);
    }
    return -1;
}
int main()
{
    int i,n,x;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search:");
    scanf("%d",&x);
    int result=binarySearch(arr,0,n,x);
    (result==-1) ? printf("Element is not present in array")
                 : printf("Element is present at index %d",result+1);
    return 0;
}