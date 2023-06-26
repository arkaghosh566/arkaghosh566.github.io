#include<stdio.h>
int  main()
{
	int a,b,*poa,*pob;
	poa=&a;
	pob=&b;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	if(*poa>*pob)
	printf("largest is %d",a);
	else if(*pob>*poa)
	printf("largest is %d",b);
	else
	printf("both are equal");
}
