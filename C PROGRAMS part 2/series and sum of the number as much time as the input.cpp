#include<stdio.h>
int main()
{  
    int n,i,t=9,sum=0;
	printf("Input the number or terms :");
	scanf("%d",&n);
	for (i=1;i<=n;++i)
	{
	 sum +=t;
	  printf("%d",t);
	  t=t*10+9;
	  printf(" ");
	}
	printf("\nThe sum of the series = %d \n",sum);
} 
