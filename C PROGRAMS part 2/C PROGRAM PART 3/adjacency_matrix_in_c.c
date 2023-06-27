#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,origin,destiny;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    int adj[n][n];
    int i,j;
    int max_edge=(n*(n-1))/2;
    for(i=1;i<=max_edge;i++)
    {
        for(j=1;j<=max_edge;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    int choice,node;
    while(1)
    {
        printf("1.Insert a node\n");
        printf("2.Delete a node\n");
        printf("3.Dispaly\n");
        printf("4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                    {
                        n++;
                        printf("The inserted node is %d \n",n);
                        for(i=n;i<=n;i++)
                        {
                            adj[i][n]=0;
                            adj[n][i]=0;
                        }
                        break;
                    }
            case 2:
                    {
                        if(n==0)
                        {
                            printf("Graph is empty\n");
                        }
                        int d;
                        printf("Enter the node to be deleted::");
                        scanf("%d",&d);
                        if(d>n)
                        {
                            printf("This node is not present in the graph\n");
                        }
                        for(i=d;i<n;i++)
                        {
                            for(j=1;j<+n;j++)
                            {
                                adj[j][i]=adj[j][i+1];
                                adj[i][j]=adj[i+1][j];
                            }
                        }
                        n--;
                        break;
                    }
            case 3:
                    {
                        for (i = 1; i <= n; i++) 
                        {
                            for (j = 1; j <= n; j++)
                            {
                                printf("%4d", adj[i][j]);
                            }
                            printf("\n");
                        }
                        break;
                    }
            case 4:
                    exit(0);
                    break;
            default:
                    printf("Wrong choice\n");
                    break;
        }
    }
}