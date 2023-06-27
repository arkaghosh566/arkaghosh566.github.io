#include <stdio.h>

int main()
{
    int i,j,n1,n2;
    printf("Enter the array size of block:");
    scanf("%d",&n1);
    printf("Enter the array size of processes:");
    scanf("%d",&n2);
    int a1[n1],a2[n2],bn[n2];
    for(i=1;i<=n1;i++)
    {
        printf("Enter the blocksize of %d_th position:",i);
        scanf("%d",&a1[i]);
    }
    for(i=1;i<=n2;i++)
    {
        printf("Enter the process size of %d_th position:",i);
        scanf("%d",&a2[i]);
    }
    for(i=1;i<=n2;i++)
    {
        for(j=1;j<=n1;j++)
        {
            if(a2[i]<=a1[j])
            {
                a1[j]=a1[j]-a2[i];
                bn[i]=j;
                break;
            }
            else if(j==n1 && a2[i]>a1[j])
            {
                bn[i]=NULL;
            }
        }
    }
    for(i=1;i<=n2;i++)
    {
        printf("%d\t%d\t%d\n",i,a2[i],bn[i]);
    }
}
