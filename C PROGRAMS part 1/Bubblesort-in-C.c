#include <stdio.h>
int main()
{ 
    int i,j,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int temp;
    temp=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d elements: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
           if(arr[j]<arr[i])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
        }
    }
    printf("The array in sorted order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}