#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);

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
    mergesort(a,0,n-1);
    printf("\nThe sorted array is:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}

void merge(int a[],int beg,int mid,int end)
{
    int i=beg,j=mid+1,index=beg,k;
    int temp[end];
    while((i<=mid) && (j<=end))
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i++;
        }
        else
        {
            temp[index]=a[j];
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index]=a[j];
            index++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=a[i];
            index++;
            i++;
        }
    }
    for(k=beg;k<index;k++)
    {
        a[k]=temp[k];
    }
}

void mergesort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}