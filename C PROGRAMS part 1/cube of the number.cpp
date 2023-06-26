#include<stdio.h>
int main()
{
	int i,n;
	printf("input nnumber of term:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("\nnumber is :%d and cube of the %d is:%d",i,i,(i*i*i));		
	}
}
