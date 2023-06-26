#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("input number of terms:");
	scanf("%d",&n);
    printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i);
     sum+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
}    
