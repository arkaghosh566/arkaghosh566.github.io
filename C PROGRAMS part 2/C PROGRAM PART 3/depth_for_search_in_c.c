#include<stdio.h>
int v[10],g[10][10],n;
int DFS(int i);
int main()
{
    int i,j,s;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the adjacency between %d and %d:",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    printf("\nThe adjacency matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",g[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        v[i]=0;
    }
    printf("Enter the starting vertex:");
    scanf("%d",&s);
    DFS(s);
}
int DFS(int i)
{
    int j;
    printf("\n%d",i);
    v[i]=1;
    for(j=0;j<n;j++)
    {
        if(v[j]!=1&&g[i][j]==1)
        {
            DFS(j);
        }
    }
}
