#include<stdio.h>
int main()
{
	int test_data;
	printf("test data:");
	scanf("%d",&test_data);
	if(test_data%400==0)
	{
	printf("%d is a leap year",test_data);
    }   
	else if(test_data%100==0)
	{
	printf("%d is not a leap year",test_data);
    }
    else if(test_data%4==0)
    {
    printf("%d is a leap year",test_data);
	}
	else
	{
	printf("%d is not a leap year",test_data);
    }
}
