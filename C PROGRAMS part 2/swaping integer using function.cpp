#include<stdio.h>
int swap(int a,int b);
int main()
{
	int i,j;
	printf("enter thge value of interger i:");
	scanf("%d",&i);
	printf("enter the value of integer j:");
	scanf("%d",&j);
	int result=swap(i,j);
}
int swap(int a,int b)
{
	int k;
	k=a;
	a=b;
	b=k;
	printf("the value of i after swap is:%d",a);
	printf("\nthe value of j after swap is:%d",b);
}
