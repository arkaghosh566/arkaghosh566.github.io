#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("The number of elements in  array:")
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
        break;
    }
}