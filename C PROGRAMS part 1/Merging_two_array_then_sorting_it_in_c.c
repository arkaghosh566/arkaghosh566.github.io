#include <stdio.h>
#include <conio.h>
void merge(int a[], int, int, int);
void merge_sort(int a[],int, int);
int main()
{
    int i,j,n1,n2,n3;
    printf("\n Enter the number of elements in the sorted array1 : ");
    scanf("%d", &n1);
    printf("\n Enter the number of elements in the sorted array2 : ");
    scanf("%d", &n2);
    n3=n1+n2;
    int arr1[n1],arr2[n2],arr3[n3];
    printf("\n \t ENTER THE ELEMENTS OF THE FIRST ARRAY: \n ");
    for(i=0;i<n1;i++)
    {
        printf("\n element of %d index of array is:\t",i+1);
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    j=n1;
    printf("\n \t ENTER THE ELEMENTS OF THE SECOND ARRAY: \n ");
    for(i=0;i<n2;i++)
    {
        printf("\n element of %d index of array is:\t",i+1);
        scanf("%d",&arr2[i]);
        arr3[j]=arr2[i];
        j++;
    }
    printf("\n \t AFTER MERGING PRINTING THE TWO SORTED ARRAY IN A NEW ARRAY: \n");
    for(i=0;i<n3;i++)
    {
        printf("\t%d\t",arr3[i]);
    }
    merge_sort(arr3, 0, n3-1);
    printf("\n The sorted array is: \n");
    for(i=0;i<n3;i++)
    printf(" %d\t", arr3[i]);
    getch();
}
void merge(int arr[], int beg, int mid, int end)
{
    int i=beg, j=mid+1, index=beg, temp[end], k;
    while((i<=mid) && (j<=end))
    {
        if(arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for(k=beg;k<index;k++)
     arr[k] = temp[k];
}
void merge_sort(int arr[], int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}