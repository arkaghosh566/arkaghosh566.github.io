#include<stdio.h>
int addtwonumbers(int x, int y);
int main()
{
	int a,b,sum;
	printf("enter the number:");
	scanf("%d%d",&a,&b);
	sum=addtwonumbers(a,b);
	printf("the sum of %d and %d is %d:",a,b,sum);
	return 0;
}
int addtwonumbers(int x,int y)
{
	int addition=0;
	addition=x+y;
	return addition;
}
