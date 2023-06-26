#include<stdio.h>
int main()
{
	float r,v,pi=3.14;
	printf("input the radius of the sphere:");
	scanf("%f",&r);
	v=(4*pi*r*r*r)/3;
	printf("the volume of sphere is %f",v);
}
