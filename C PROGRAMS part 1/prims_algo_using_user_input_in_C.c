//These code is running in online compiler but on in vscode
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<limits.h>

void main()
{
    int i,j,n,x,y,min,no_edge;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    int cost[n][n],s[n];
    printf("\nEnter the cost matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the cost of travelling from %d to %d:",i,j);
            scanf("%d",&cost[i][j]);
        }
    }
    printf("\nThe entered cost matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",cost[i][j]);
        }
        printf("\n");
    }
    memset(s,false,n);
    s[0]=true;
    printf("\nedge : weight\n");
    for(no_edge=0;no_edge<(n-1);no_edge++)
    {
        x=0;
        y=0;
        min=INT_MAX;
        for(i=0;i<n;i++)
        {
            if(s[i])
            {
                for(j=0;j<n;j++)
                {
                    if(!s[j]&&cost[i][j])
                    {
                        if(min>cost[i][j])
                        {
                            min=cost[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        printf("%d->%d : %d\n",x,y,cost[x][y]);
        s[y]=true;
    }
}