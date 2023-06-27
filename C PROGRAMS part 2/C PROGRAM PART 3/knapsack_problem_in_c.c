#include<stdio.h>

int max(int a,int b)
{
    return (a>b) ? a:b;
}

int knapsack(int mw,int wt[],int val[],int n)
{
    if(n==0 || mw==0)
    {
        return 0;
    }
    else if(wt[n-1]>mw)
    {
        return knapsack(mw,wt,val,n-1);
    }
    else
    {
        return max(val[n-1]+knapsack(mw-wt[n-1],wt,val,n-1),knapsack(mw,wt,val,n-1));
    }
}

void main()
{
    int mw,n,i;
    printf("\nEnter the number of weights and values taken:");
    scanf("%d",&n);
    int val[n],wt[n];
    printf("\nEnter the maximum weight:");
    scanf("%d",&mw);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value:");
        scanf("%d",&val[i]);
        printf("and its corresponding weight is:");
        scanf("%d",&wt[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nThe weight of value %d is:\t%d",val[i],wt[i]);
    }
    printf("\nMaximum value to be taken is:%d",knapsack(mw,wt,val,n));
}