#include <stdio.h>
int main() 
{
    int n1, n2, n3;
    printf("1st number:");
    scanf("%d",&n1);
    printf("2nd number:");
    scanf("%d",&n2);
    printf("3rd number:");
    scanf("%d",&n3);
    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);
    if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);
    if (n3 >= n1 && n3 >= n2)
        printf("%d is the largest number.", n3);
}
