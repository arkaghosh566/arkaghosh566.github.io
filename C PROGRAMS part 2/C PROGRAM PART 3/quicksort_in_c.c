#include<stdio.h>
#include<conio.h>
int partition(int a[],int,int);
void quicksort(int a[],int,int);

int main()
{
    int i,n;
    printf("Enter the array length:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element of %d position of array:",i);
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("\nThe sorted array is:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}

int partition(int a[],int beg,int end)
{
    int temp,pivot,left,right;
    pivot=left=beg;
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

void quicksort(int a[],int beg,int end)
{
    int pivot;
    if(beg<end)
    {
        pivot=partition(a,beg,end);
        quicksort(a,beg,pivot-1);
        quicksort(a,pivot+1,end);
    }
}