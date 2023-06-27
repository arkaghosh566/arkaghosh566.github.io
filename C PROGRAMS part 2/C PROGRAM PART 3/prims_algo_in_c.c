#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n,i,j;
    int min,no_edge;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    int g[n][n],s[n];
    printf("\nEnter the cost matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the cost for travelling from %d to %d is:",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    printf("\nThe cost matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                printf("%d\t",g[i][j]);
        }
        printf("\n");
    }
    memset(s,false,n);
    int x,y;
    s[0]=true;
    no_edge=0;
    printf("Edge : Weight\n");
    while(no_edge<(n-1))
    {
        int min=INT_MAX;
        x=0;
        y=0;
        for(i=0;i<n;i++)
        {
            if(s[i])
            {
                for(j=0;j<n;j++)
                {
                    if(!s[j]&&g[i][j])
                    {
                        if(min>g[i][j])
                        {
                            min=g[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        printf("%d - %d : %d\n",x,y,g[x][y]);
        s[y]=true;
        no_edge++;
    }
    return 0;
}

