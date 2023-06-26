#include<stdio.h>
int sumoftermsupton(int n)
{
	int sum;
	if(n!=0)
	return (n+sumoftermsupton(n-1));
	else
	return n;
}
int main()
{
	int terms,sum;
	printf("enter number of terms:");
	scanf("%d",&terms);
	sum=sumoftermsupton(terms);
	printf("the sum upto %d terms is:%d",terms,sum);
	return 0;
}
