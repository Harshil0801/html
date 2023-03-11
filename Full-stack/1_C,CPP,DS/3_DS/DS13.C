                                            // Double Queue :

#include<stdio.h>
#define size 5
int deque_arr[size];
int front=-1;
int rear=-1;
void insert_front()
{
    printf("\n After --> front : %d  rear : %d",front,rear);
    int added_item;
    if((front==0 && rear==size-1) || (front==rear+1))
    {
        printf("\n Queue Overflow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(front==0)
        front=size-1;
    else
        front=front-1;

    printf("\n Iuput the element for adding in queue : ");
    scanf("%d",&added_item);
    deque_arr[front]=added_item;
    printf("\n After --> front : %d  rear : %d",front,rear);
}

void insert_rear()
{
    printf("\n Before --> front : %d  rear : %d",front,rear);
    int added_item;
    if((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("\n Queue Overflow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==size-1)
        rear=0;
    else
        rear=rear+1;

    printf("\n Input the element for adding in queue : ");
    scanf("%d",&added_item);
    deque_arr[rear]=added_item;
    printf("\n After --> front : %d  rear : %d",front,rear);
}
void delete_front()
{
    if(front==-1)
    {
        printf("\n Queue Underflow");
        return;
    }
    printf("\n Element deleted from queue is : %d",deque_arr[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==size-1)
        front=0;
    else
        front=front+1;
}
void delete_rear()
{
    if(front==-1)
    {
        printf("\n Queue Underflow");
        return;
    }
    printf("\n Element deleted from queue is : %d",deque_arr[rear]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(rear==0)
        rear=size-1;
    else
        rear=rear-1;
}
void diplay_queue()
{
    int front_pos=front,rear_pos=rear;
    if(front==-1)
    {
        printf("\n Queue is empty");
        return;
    }
    printf("\n Queue elements : ");
    if(front_pos<=rear_pos)
    {
        while(front_pos<=rear_pos)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos<=size-1)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
        front_pos=0;
        while(front_pos<=rear_pos)
        {
            printf("%d ",deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
int main()
{
    int ch;
    do
    {
        printf("\n\n 1. insert element front");
        printf("\n 2. insert element rear");
        printf("\n 3. delete element front");
        printf("\n 4. delete element rear");
        printf("\n 5. exit");

        printf("\n Entr your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                insert_front();
                diplay_queue();
                break;
            case 2:
                insert_rear();
                diplay_queue();
                break;
            case 3:
                delete_front();
                diplay_queue();
                break;
            case 4:
                delete_rear();
                diplay_queue();
                break;
            default:
                printf("\n your choice is invalide...\n");
                break;
        }
    }
    while (ch!=5);
}