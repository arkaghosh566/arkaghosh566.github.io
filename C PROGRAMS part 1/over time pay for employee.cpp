#include<stdio.h>
int main()
{
	int i,over_time_pay,hour_worked,over_time;
	for(i=1;i<=10;++i)
	{
		printf("enter the working hour of employee no %d:",i);
		scanf("%d",&hour_worked);
		if(hour_worked>40)
		{
			over_time=hour_worked-40;
			over_time_pay=over_time*12;
			printf("employee no %d overtime pay is %d \n",i,over_time_pay);
		}
		else
		printf("you have to work more then 40 hours \n");
	
	}
}
