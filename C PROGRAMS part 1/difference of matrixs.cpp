#include <stdio.h>
int main()
{
int m,n;
printf("enter the order of matrix m and n:");
scanf("%d %d",&m,&n);
float a[m][n], b[m][n], result[m][n];
printf("Enter the 1st matrix\n");
for (int i = 0; i < m; ++i)
{
 for (int j = 0; j < n; ++j)
 {
 printf("Enter a%d%d: ", i+1, j+1 );
 scanf("%f", &a[i][j]);
 }
}
printf("Enter elements of 2nd matrix\n");
for (int i = 0; i < m; ++i)
{
for (int j = 0; j < n; ++j)
 {
 printf("Enter b%d%d: ", i+1 , j+1 );
 scanf("%f", &b[i][j]);
 }
}
for (int i = 0; i < m; ++i)
{
for (int j = 0; j < n; ++j)
 {
 result[i][j] = a[i][j] - b[i][j];
 }
}
printf("\ndifference Of Matrix:\n");
for (int i = 0; i < m; ++i)
{
for (int j = 0; j < n; ++j)
 {
printf(" %.1f\t", result[i][j]);
if (j == m)
printf("\n");
 }
}
return 0;
}
