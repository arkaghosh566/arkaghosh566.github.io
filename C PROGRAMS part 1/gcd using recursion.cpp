#include<stdio.h>
int gcd(int x ,int y);
int main()
{
	int a,b,result;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	result=gcd(a,b);
	printf("gcd of two input numbers %d and %d is %d:",a,b,gcd(a,b));
}
int gcd(int x,int y)
{
	if(y==0)
	return x;
	else 
	return gcd(y,x%y);
}
