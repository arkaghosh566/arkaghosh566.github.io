#include<stdio.h>
#include<stdlib.h>
int main()
{
 int top=-1,i,n,choice; 
 printf("\n Enter the size of STACK : ");
 scanf("%d",&n);
 int stack[n];
 while(1)
 {
   printf("\n 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY\n 5.EXIT \n");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:if(top<=n)
            {
                if(top==n)
                {
                    printf("The stack is full");
                }
                else
                {
                        top++;
                        printf("Insert the element:");
                        scanf("%d",&stack[top]);
                        top++;
                }  
            }
            break;
     case 2:if(top>=-1)
             {
                 if(top==-1)
                 {
                     printf("The stack is empty");
                 }
                 else
                 {
                     printf("\nThe popped element is %d",stack[top]);   
                     top--;
                 }
             }
            break;
     case 3:if(top>=-1)
             {
               if(top==-1)
                 {
                     printf("The stack is empty");
                 }
                else
                {
                    printf("%d",stack[top]);
                }  
             }
            break;
     case 4:if(top>=-1)
             {
               if(top==-1)
                 {
                     printf("The stack is empty");
                 }
                else
                {
                    for(i=0;i<=top;i++)
                    {
                        printf("%d ",stack[i]);
                    }
                }
             }
            break;
     case 5:
            exit(1);
            break;
     default:
             {
                printf("WRONG CHOICE");
             }
   }
}
}