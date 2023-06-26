#include <stdio.h>
#include <conio.h>
int partition_max(int a[], int beg, int end);
int partition_min(int a[], int beg, int end);
int main()
{
    int i,n,min,max;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d:",i+1);
        scanf("%d", &arr[i]);
    }
    min=partition_min(arr, 0, n-1);
    printf("Minimum term of array is: %d\t", arr[min]);
    max=partition_max(arr, 0, n-1);
    printf("Maximum term of array is: %d\t", arr[max]);
    getch();
}
int partition_min(int a[],int beg,int end)
{
    int temp,min,left,right;
    left=min=beg;
    right=end;
    while(left!=right)
    {
        while(a[min]<=a[right] && min!=right)
        {
            right--;
        }
        if(a[min]>a[right])
        {
            temp=a[min];
            a[min]=a[right];
            a[right]=temp;
            right--;
        }
    }
    return min;
}
int partition_max(int a[],int beg,int end)
{
    int temp,max,left,right;
    left=max=beg;
    right=end;
    while(left!=right)
    {
        while(a[max]>=a[right] && max!=right)
        {
            right--;
        }
        if(a[max]<a[right])
        {
            temp=a[max];
            a[max]=a[right];
            a[right]=temp;
            right--;
        }
    }
    return max;
}