#include<stdio.h>
int main()
{
	int l,w;
	float p;
	printf("input the lenght of rectangle:");
	scanf("%d",&l);
	printf("input the width of rectangle:");
	scanf("%d",&w);
	p=2*(l+w);
	printf("the perimeter of the rectangle is:%f",p);
}
