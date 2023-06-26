#include<stdio.h>
int main()
{
	int i,j;
	printf("*\n");
	for(i=1;i<5;++i)
	{
		for(j=(8-(i*2));j<8;++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
