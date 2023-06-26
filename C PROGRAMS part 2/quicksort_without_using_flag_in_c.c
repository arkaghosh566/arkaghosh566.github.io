#include <stdio.h>
#include <conio.h>
int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);
void main()
{
    int i, n;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element at index %d:",i+1);
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, n-1);
    printf("\n The sorted array is: \n");
    for(i=0;i<n;i++)
    printf(" %d\t", arr[i]);
    getch();
}
int partition(int a[],int beg,int end)
{
    int temp,pivot,left,right;
    left=pivot=beg;
    right=end;
    while(left!=right)
    {
        while(a[pivot]<=a[right] && pivot!=right)
        {
            right--;
        }
        if(a[pivot]>a[right])
        {
            temp=a[pivot];
            a[pivot]=a[right];
            a[right]=temp;
            pivot=right;
        }
        while(a[pivot]>=a[left] && pivot!=left)
        {
            left++;
        }
        if(a[pivot]<a[left])
        {
            temp=a[pivot];
            a[pivot]=a[left];
            a[left]=temp;
            pivot=left;
        }
    }
    return pivot;
}
void quick_sort(int a[], int beg, int end)
{
    int pivot;
    if(beg<end)
    {
        pivot = partition(a, beg, end);
        quick_sort(a, beg, pivot-1);
        quick_sort(a, pivot+1, end);
    }
}