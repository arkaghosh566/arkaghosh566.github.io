#include <stdio.h>
int main()
{
    char s[1000];  
    int i,c=0,count=0;
    printf("Enter  the string : ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("the length of string is:%d",count);
    for(i=0;i<count/2;i++)  
    {
    	if(s[i]==s[count-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("\nstring is palindrome");
    else
        printf("\nstring is not palindrome");
    return 0;
}
