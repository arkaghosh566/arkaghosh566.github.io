#include<stdio.h>
const int city=2;
const int week=5;
int  main()
{
	int temperature[city][week];
	for(int i=0;i<city;++i)
	{
		for(int j=0;j<week;++j)
		{
			printf("city %d day %d:",i+1,j+1);
			scanf("%d",&temperature[i][j]);
		}
	}
	printf("\ndisplaying values:");
	for (int i = 0; i < city; ++i)
 {
 for (int j = 0; j < week; ++j)
 {
 printf("\nCity %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
 }
 }
return 0;
}
