#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("The %d th element of array is:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in array are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i] );
    }
    int x;
    printf("\n The value to be searched is:");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",result+1);
    return 0;
}