#include<stdio.h>
int main()
{
	char name[100],count=0,i;
	printf("enter the string:");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
	count++;
    }
    printf("length of the string:");
    printf("%d\n",count);
    for(i=count;i>=0;i--)
    {
    	printf("%c",name[i]);
	}
}
