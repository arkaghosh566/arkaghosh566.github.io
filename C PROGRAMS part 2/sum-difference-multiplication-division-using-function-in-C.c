#include<stdio.h>
int sum(int a,int b);
int difference(int a,int b);
int multiplication(int a,int b);
int division(int a,int b);
int main()
{
    int a,b;
    int s,dff,m;
    float div;
    printf("The value of a and b:");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    dff=difference(a,b);
    m=multiplication(a,b);
    div=division(a,b);
    printf("sum=%d \n difference=%d \n multiplication=%d \n division=%f",s,dff,m,div);
}
int sum(int a,int b)
{
    return(a+b);
}
int difference(int a,int b)
{
    if(a>b)
    {
        return(a-b);
    }
    else
    {
        return(b-a);
    }
}
int multiplication(int a,int b)
{
    return(a*b);
}
int division(int a,int b)
{
    return(a/b);
}