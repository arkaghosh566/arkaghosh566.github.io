#include<stdio.h>
int main()
{
	int sum=0,i;
	printf("number between 100 and 200,divisible by 9:\n");
    for(i=100;i<=200;++i)
    {
    	if(i%9==0)
    	{
    	printf("%d",i);
    	printf(" ");
    	sum+=i;
    }
	}
	printf("\nthe sum:%d",sum);
}
