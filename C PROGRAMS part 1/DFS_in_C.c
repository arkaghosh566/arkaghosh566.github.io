#include<stdio.h>
void DFS(int);
int G[10][10],visited[10],n;
void main()
{
    int i,j,s;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    printf("\nEnter adjecency matrix of the graph:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&G[i][j]);
        }
    }
    printf("\nThe entered adjecency matrix of the graph is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",G[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    printf("\nEnter the starting vertex:");
    scanf("%d",&s);
    DFS(s);
}
void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
    {
        if(!visited[j]&&G[i][j]==1)
        {
            DFS(j);
        }
    }
}