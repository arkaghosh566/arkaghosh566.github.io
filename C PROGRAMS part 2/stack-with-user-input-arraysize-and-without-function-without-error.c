#include <stdio.h>
void main()
{
    int top=-1,max;
    printf("Enter the maximum size of the stack\n");
    scanf("%d",&max);
    int stack[max];
    while(1)
    {
        int c=0;
        printf("Enter \n 1.For push\n 2.For pop. \n 3.To show the stack. \n 4.To exit \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: if(top==max-1)
                    {
                        printf("The stack is full.\n");
                    }
                    else
                    {
                        printf("Enter the element to be added.\n");
                        int i;
                        scanf("%d",&i);
                        top=top+1;
                        stack[top]=i;
                    }
                    break;
            case 2: if(top==-1)
                    {
                        printf("The stack is empty.\n");
                    }
                    else
                    {
                        int d=stack[top];
                        top=top-1;
                        printf("The element deleted is: %d\n",d);
                    }
                    break;
            case 3: if(top==-1)
                    {
                        printf("The stack is empty.\n");
                    }
                    else
                    {
                        printf("The elements in the stack are:\n");
                        for(int i=0;i<=top;i++)
                        {
                            printf("%d ",stack[i]);
                        }
                        printf("\n");
                    }
                    break;
            case 4: exit(1);
                    break;
            default: printf("Invalid input.\n");
        }
    }
}