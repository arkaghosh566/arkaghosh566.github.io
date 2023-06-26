#include<stdio.h>
struct reverse
{
	int num[100];
}rev;
int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("the %d number is:",i);
		scanf("%d",&rev.num[i]);
	}
	printf("the numbers in reverse order are:");
	for(i=n;i>=1;i--)
	{
		printf("\nthe %d number is:%d",i,rev.num[i]);
	}
}
