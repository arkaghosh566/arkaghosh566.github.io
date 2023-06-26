#include <stdio.h>
#include <string.h>
int main()
{
    char str[30],*p1,*p2;
    printf("Enter any string\n");
    gets(str);
    p1=str+strlen(str);
    p2=str;
    p1--;
    while(p1>=p2)
    {
        if(*p1==*p2)
        {
            p1--;
            p2++;
        }
        else
        {
            break;
        }
    }
        if(p2>p1)
        {
            printf("The string %s is a Palindrome",str);
        }
        else
        {
            printf("The string %s is not a Palindrome",str);
        }
    return 0;
}
