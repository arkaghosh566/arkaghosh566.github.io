#include<stdio.h>
int main()
{
	int i,spaces,rows,columns,k;
    printf("enter number of rows:");
	scanf("%d",&rows);
	spaces=rows+4-1;
	for(i=1;i<=rows;++i)
    {
         for(k=spaces;k>=1;--k)
            {
              printf(" ");
            }
                      
	   for(columns=1;columns<=i;++columns)
	   printf("%d ",i);
	printf("\n");
    spaces--;
   }
}
