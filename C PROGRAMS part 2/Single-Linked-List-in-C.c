#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* head=NULL;
int len;

void append();
void addatbegin();
void addrandomly();
int length();
void display();
void deleteatbegin();
void deleteatend();
void deleterandomly();
void reverselist();
void main()
{
    int ch ;
    while(1)
    {
        printf("\nSingle Linked List Operations:\n");
        printf(" 1.Append \n 2.Addatbegginning \n 3.Addrandomly \n 4.Length \n 5.Display \n 6.Deleteatbegin \n 7.Deleteatend \n 8.Deleterandomly \n 9.Reverselist \n 10.EXIT \n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    append();
                    break;
            case 2:
                   addatbegin();
                   break;
            case 3:
                   addrandomly();
                   break;
            case 4:
                    len=length();
                    printf("\nThe length of the list is:%d\n",len);
                    break;
            case 5:
                    display();
                    break;
            case 6:
                    deleteatbegin();
                    break;
            case 7:
                    deleteatend();
                    break;
            case 8:
                    deleterandomly();
                    break;
            case 9:
                    reverselist();
                    break;
            case 10:
                    exit(1);
            default:
                    printf("NO CHOICE FOUND.");
                    break;
        }
    }
}
void append()
{
    struct node* temp,*newnode;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head == NULL)
    {
        head=temp;
    }
    else
    {
        newnode=head;
        while(newnode->link != NULL)
        {
            newnode=newnode->link;
        }
        newnode->link=temp;
    }
}
int length()
{
    int count=0;
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void display()
{
    struct node* temp=head;
    if(temp==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}
void deleteatbegin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("nList is Empty:n");
                return;
        }
        else
        {
                ptr=head;
                head=head->link;
                printf("\nThe deleted element is :%d\t",ptr->data);
                free(ptr);
        }
}
void deleteatend()
{
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(head->link ==NULL)
        {
                ptr=head;
                head=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=head;
                while(ptr->link!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->link;
                }
                temp->link=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);
        }
}
void deleterandomly()
{
        int i,pos;
        struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("nThe List is Empty:n");
                exit(0);
        }
        else
        {
                printf("nEnter the position of the node to be deleted:t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=head;
                        head=head->link;
                        printf("\nThe deleted element is:%d\t",ptr->data);
                        free(ptr);
                }
                else
                {
                        ptr=head;
                        for(i=0;i<pos;i++) 
                        {
                            temp=ptr; ptr=ptr->link;
                                if(ptr==NULL)
                                {
                                    printf("\nPosition not Found:\n");
                                    return;
                                }
                        }
                        temp->link =ptr->link;
                        printf("\nThe deleted element is:%d\t",ptr->data);
                        free(ptr);
                }
        }
}
void addatbegin()
{
   struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->data);
        temp->link =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->link=head;
                head=temp;
        }
}
void addrandomly()
{
    struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->link) ;
  
        temp->link=NULL;
        if(pos==0)
        {
                temp->link=head;
                head=temp;
        }
        else
        {
                for(i=0,ptr=head;i<pos-1;i++)
                { 
                    ptr=ptr->link;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found:[Handle with care\n");
                                return;
                        }
                }
                temp->link =ptr->link;
                ptr->link=temp;
        }
}
void reverselist()
{
        struct node *prevnode,*nextnode,*currentnode;
        prevnode=0;
        currentnode=nextnode=head;
        while(nextnode!=0)
        {
                nextnode=nextnode->link;
                currentnode->link=prevnode;
                prevnode=currentnode;
                currentnode=nextnode; 
        }
}