#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
int push();
void pop();
void display();
int main()
{
    int n,choice,new;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
     while(1)
          {
              printf("1 to display\n");
              printf("2 to push\n");
              printf("3 to pop\n");
              printf("4 to exit\n");
              printf("ENTER YOUR CHOICE:\n");
              scanf("%d",&choice);
           }
    switch(choice)
    {
        case 1:
        display();
        break;
        case 2:
        push();
        break;
        case 3:
        pop();
        break;
        case 4:
        exit(0);
        case 5:
        default:
        printf("wrong choice\n");
    }
}
int push(int new,int n,int arr[])
{
   if(top == n-1 )
   {
       printf("Overflow or stack is full");
   }
   else
   {
       int new;
       scanf("%d",&new);
       top++;
       arr[top]=new;
       return arr[top];
   }
void pop()
{
   if(top == -1)
   {
       printf("Underflow or the stack is empty");
   }
   else
   {
       printf("popped element is:%d",arr[top]);
       top--;
   }
}
void display()
{
    int i,n;
    if(top>=0)
    {
        printf("The elements are:");
        for(i=top;i>=0;i--)
        {
          printf("%d",arr[i]);
        }
    else
    {
        printf("The stack is empty");
    }
    }
}
}