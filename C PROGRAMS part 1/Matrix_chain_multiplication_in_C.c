/* A naive recursive implementation that simply
  follows the above optimal substructure property */
#include <limits.h>
#include <stdio.h>
 
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    // place parenthesis at different places between first
    // and last matrix, recursively calculate count of
    // multiplications for each parenthesis placement and
    // return the minimum count
    for (k = i; k < j; k++)
    {
        count =   MatrixChainOrder(p, i, k)
                + MatrixChainOrder(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;     
    }
    // Return minimum count
    return min;
}
 
// Driver code
int main()
{
    int n,i;
    printf("Enter number of matrices:");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the rows and columns of the matrices:");
    for(i=0;i<(n+1);i++)
    {
        scanf("%d",&a[i]);
    }
    printf("a[]={");
    for(i=0;i<(n+1);i++)
    {
        printf("%d\t",a[i]);
    }
    printf("}");
    printf("\nMinimum number of multiplications is %d ",MatrixChainOrder(a, 0, n-1));
    getchar();
    return 0;
}