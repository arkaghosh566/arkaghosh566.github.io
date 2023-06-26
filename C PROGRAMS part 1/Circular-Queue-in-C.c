#include <stdio.h>
#include<stdlib.h>
int main()
{
    int front=0,rear=0,max,r=1;
    printf("Enter the maximum size of the queue\n");
    scanf("%d",&max);
    max=max+1;
    int cqueue[max];
    while(1)
    {
        int c=0;
        printf("Enter \n 1.To INSERTING.\n 2.To DELETING. \n 3.To DISPLAY. \n 4.To EXIT \n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: r=(rear+1)%max;
                    if(front==r)
                    {
                        printf("The queue is full.\n");
                    }
                    else
                    {
                        printf("Enter the element to be inserted at %d.\n",r);
                        int i;
                        scanf("%d",&i);
                        cqueue[rear]=i;
                        rear=r;
                    }
                    break;
            case 2: if(front==rear)
                    {
                        printf("The queue is empty.\n");
                    }
                    else
                    {
                        int d=cqueue[front];
                        front=(front+1)%max;
                        printf("The element deleted is: %d at %d\n",d,front);
                    }
                    break;
            case 3: if(front==rear)
                    {
                        printf("The queue is empty.\n");
                    }
                    else
                    {
                        int re=rear;
                        if(front>rear)
                        {
                            re=rear+max;
                        }
                        for(int i=front;i<re;i++)
                        {
                            if(i>=max)
                            {
                                printf("%d ",cqueue[i-max]);
                            }
                            else
                            {
                                printf("%d ",cqueue[i]);
                            }
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