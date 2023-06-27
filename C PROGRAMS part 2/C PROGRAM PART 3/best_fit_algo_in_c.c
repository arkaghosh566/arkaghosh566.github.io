#include <stdio.h>
#include<limits.h>
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
    printf("\nProcess Process size Block size\n");
    int index=0;
    for(i=1;i<=n2;i++)
    {
        int min=INT_MAX;
        int flag=0;
        for(j=1;j<=n1;j++)
        {
            if(a2[i]<=a1[j])
            {
                flag=1;
                if(min>(a1[j]-a2[i]))
                {
                    min=a1[j]-a2[i];
                    index=j;
                }
            }
        }
        a1[index]=a1[index]-a2[i];
        if(flag==1)
        {
            printf("%d\t%d\t\t%d\n",i,a2[i],index);
        }
        if(flag==0)
        {
            printf("%d\t%d\t\t Not Allocated\n",i,a2[i]);
        }
    }
}