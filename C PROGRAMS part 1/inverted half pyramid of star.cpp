#include<stdio.h>
int main()
{
	int i,j,r;
	printf("enter number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;++i)
	{
		for(j=r;j>=i;--j)
		{
			printf("*");
		}
		printf("\n");
	}
}
