#include<stdio.h>
int main()
{
    int i,x,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    {
        printf("Enter array elements of index %d is :",i);
        scanf("%d",&a[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&x);
    for(i=0;i<n;++i)
    {
        if(a[i]==x)
            break;
    }
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
return 0;
}