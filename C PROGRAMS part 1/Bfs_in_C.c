#include <stdio.h>
#define V 8
int G[V][V]={{0,1,1,1,0,0,0,0},
             {1,0,0,0,1,0,0,0},
             {1,0,0,0,0,1,1,0},
             {1,0,0,0,0,0,0,1},
             {0,1,0,0,0,0,0,0},
             {0,0,1,0,0,0,0,0},
             {0,0,1,0,0,0,0,0},
             {0,0,0,1,0,0,0,0}};
int queue[V],visited[V];
int left=0,right=-1;

void bfs(int v)
{
    for(int i=0;i<V;i++)
    {
        if(G[v][i] && !visited[i])
        {
            queue[++right]=i;
        }
    }
    if(left <= right)
    {
        visited[queue[left]]=1;
        bfs(queue[left++]);
    }
}

void main()
{
    int v;
    for(int i=0;i<V;i++)
    {
        queue[i]=0;
        visited[i]=0;
    }
    printf("Enter the starting vertex: ");
    scanf("%d",&v);
    bfs(v);
    for(int i=1;i<=V;i++)
    {
        if(visited[i])
        {
            printf("%d\n",i);
        }
        else
        {
            printf("BFS is not possible: \n");
        }
    }
}