#include<stdio.h>
#include<stdlib.h>
void main()
{
    int front=-1,rear=-1,max;
    printf("Enter the maximum size of the queue\n");
    scanf("%d",&max);
    int queue[max];
    while(1)
    {
        int c=0;
        printf("Enter \n 1.For entering an element.\n 2.For deleting an element. \n 3.To show the queue. \n 4.To exit \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: if(rear>=max-1)
                    {
                        if(front<=-1)
                        {
                            printf("The queue is full.\n");
                        }
                        else
                        {
                            for(int i=front;i<=rear;i++)
                            {
                                queue[i-1]=queue[i];
                            }
                            front=front-1;
                            printf("Enter the element to be added.\n");
                            int i;
                            scanf("%d",&i);
                            queue[rear]=i;
                        }
                    }
                    else
                    {
                        printf("Enter the element to be added.\n");
                        int i;
                        scanf("%d",&i);
                        rear=rear+1;
                        queue[rear]=i;
                    }
                    break;
            case 2: if(front==rear)
                    {
                        printf("The queue is empty.\n");
                        front=-1;
                        rear=-1;
                    }
                    else
                    {
                        front=front+1;
                        int d=queue[front];
                        printf("The element deleted is: %d\n",d);
                    }
                    break;
            case 3: if(front==rear)
                    {
                        printf("The queue is empty.\n");
                    }
                    else
                    {
                        printf("The elements in the queue are:\n");
                        for(int i=front+1;i<=rear;i++)
                        {
                            printf("%d ",queue[i]);
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