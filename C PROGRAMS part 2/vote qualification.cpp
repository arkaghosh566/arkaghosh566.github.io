#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age%18>=0)
	printf("eligible for vote");
	else
	printf("not eligible for vote");
}
