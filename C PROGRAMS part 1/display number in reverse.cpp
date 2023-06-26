#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("input a number:");
	scanf("%d",&a);
	for(i=a;a!=0;a=a/10)
	{
	b=a%10;
	c=c*10+b;
}
	printf("\n the number in reverse order is:%d",c); 
}

