#include<stdio.h>
#include<limits.h>
int matchainmult(int p[],int i,int j);
int main()
{
    int i,n;
    printf("Enter number of matrices:");
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<(n+1);i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The minimum number of multiplications:%d",matchainmult(a,1,n));
    getchar();
}
int matchainmult(int p[],int i,int j)
{
    int k,count;
    int min=INT_MAX;
    if(i==j)
    {
        return 0;
    }
    for(k=i;k<j;k++)
    {
        count=matchainmult(p,i,k)+matchainmult(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(count<min)
        {
            min=count;
        }
    }
    return count;
}