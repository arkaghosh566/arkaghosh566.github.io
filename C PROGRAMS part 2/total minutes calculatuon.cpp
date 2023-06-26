#include<stdio.h>
int main()
{
	int m,h,total;
	printf("input hours:");
	scanf("%d",&h);
	printf("input minutes:");
	scanf("%d",&m);
	total=m+(h*60);
	printf("total:%d",total);
}
