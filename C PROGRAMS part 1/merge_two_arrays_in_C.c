#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the size of two arrays:");
    scanf("%d %d",&n,&m);
    int a1[n],a2[m],a3[n+m];
    printf("Enter the elements of first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
        a3[i]=a1[i];
    }
    printf("Enter the elements of the second array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
        a3[n+i]=a2[i];
    }
    printf("After merging two array the resultant array is:");
    for(i=0;i<(n+m);i++)
    {
        printf("%d\t",a3[i]);
    }
}