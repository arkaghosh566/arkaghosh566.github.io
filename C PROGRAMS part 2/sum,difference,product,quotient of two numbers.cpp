#include<stdio.h>
int main()
{
	int a,b,sum,difference,product;
	float quotient;
	printf("input any two numbers separated by comma:");
	scanf("%d,%d",&a,&b);
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	printf("\nthe sum of the given numbers :%d",sum);
	printf("\nthe difference of the given number:%d",difference);
	printf("\nthe product of the given number:%d",product);
	printf("\nthe quotient of the given numbers:%f",quotient);
}
