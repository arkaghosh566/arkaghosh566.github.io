#include<stdio.h>
int main()
{
	char arr[100];
	int i,count=0;
	printf("enter the string:");
	scanf("%s",arr);
	for(i=0;arr[i]!='\0';i++)
	{
			count++;
	}
	printf("the length of string is:%d",count);
}
