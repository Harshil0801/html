                                            // Circular Queue :
#include<stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;
void insert_queue(int added_item)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=added_item;
    }
    else if ((rear+1) % size == front)
    {
        printf("\n Queue is Overflow...");
    }
    else
    {
        rear=(rear+1) % size;
        queue[rear] = added_item;
    }
}
int delete_queue()
{
    if((front==-1) && (rear==-1))
    {
        printf("\n Queue is Underflow...");
    }
    else if (front == rear)
    {
        printf("\n The deleted Element is %d",queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n The Element is %d",queue[front]);
        front = (front+1) % size; 
    }
}
void display_queue()
{
    if (front == -1)
    {
        printf("\n Queue is Empty...");
        return;
    }
    printf("\n Queue Elements...");
    if (rear >= front)
    {
        for (int i=front; i<=rear; i++)
            printf("\t %d",queue[i]);
    }
    else
    {
        for (int i=front; i<size; i++)
            printf("\t %d",queue[i]);

        for (int i=0; i<=front; i++)
            printf("\t %d",queue[i]);
    }
}
int main()
{
    int ch,x;
    do
    {
        printf("\n\n 1. insert element...");
        printf("\n 2. delete element...");
        printf("\n 3. Display...");
        printf("\n 4. exit...");

        printf("\n Entr your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\n Enter Element : ");
                scanf("%d",&x);
                insert_queue(x);
                display_queue();
                break;
            case 2:
                delete_queue();
                display_queue();
                break;
            case 3:
                display_queue();
                break;
            default:
                printf("\n your choice is invalide...\n");
                break;
        }
    }
    while (ch!=4);
}
