#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue_arr[MAX];
int rear = -1, front = -1;
void insert(int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();
int main()
{
    int choice, item;
    while (1)
    {
        printf("Press 1 for Insert\n");
        printf("Press 2 for Delete\n");
        printf("Press 3 to Display all elemntsof the queue \n");
        printf("Press 4 to Quit \n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the elements for adding in queue :\n");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            item = del();
            printf("Deleted element is %d :\n", item);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}
void insert(int item)
{
    if (isFull())
    {
        printf("Queue Overflow \n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue_arr[rear] = item;
}
int del()
{
    int item;
    if (isEmpty())
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    item = queue_arr[front];
    front = front + 1;
    return item;
}
int isEmpty()
{
    if (front == -1 || front == rear + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is :\n\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue_arr[i]);
    }
    printf("\n");
}