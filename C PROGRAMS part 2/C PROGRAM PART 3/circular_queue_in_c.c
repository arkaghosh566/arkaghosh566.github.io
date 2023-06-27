#include<stdio.h>
#include<stdlib.h>
void main()
{
    int c,n,front=-1,rear=-1;
    printf("Enter the array size:");
    scanf("%d",&n);
    int circularqueue[n];
    while(1)
    {
        printf("\n 1 to INSERT \n 2 to DELETE \n 3 to DISPLAY \n 4 to EXIT");
        printf("\n Enter your choice:");
        scanf("%d",&c);
     switch(c)
     {
        case 1:
                {
                    if((front==rear+1) || (front==0 && rear==n-1))
                     {
                         printf("Circularqueue is full");
                     }
                     else
                     {
                         rear=(rear+1)%n;
                         int new;
                         printf("Enter the new element:");
                         scanf("%d",&new);
                         circularqueue[rear]=new;
                     }
                }
                break;
        case 2:
                {
                    if((front==-1) && (rear==-1))
                     {
                         printf("Circularqueue is EMPTY");
                     }
                     else
                     {
                         int d;
                         front=front+1;
                         d=circularqueue[front];
                         printf("The DELETED eleement is %d",d);
                     }
                }
                break;
        case 3:
                {
                     if((front==-1) && (rear==-1))
                     {
                         printf("Circularqueue is EMPTY");
                     }
                     else
                     {
                         int i;
                         for(i=front;i!=rear;i=(i+1)%n)
                         {
                              printf("%d ",circularqueue[i]);
                         }
                     }
                }
                break;
        case 4: exit(1);
                break;
        default: printf("Invalid input.\n");
     }
    }
}