                                                // Link-List :

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)
{
    int cnt = 0;
    if(head == NULL)
        printf("\n List is Empty.");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d   ", ptr->data);
        cnt++;
        ptr = ptr -> next;
    }
    printf("\n");
    printf("\n List count : %d",cnt);
}
void insert_eng(struct node **head_ref, int new_data)
{
    struct node *ptr = *head_ref;
    struct node *temp = (struct node *) malloc (sizeof(struct node));
    temp -> next = NULL;
    temp -> data = new_data;
    if(*head_ref == NULL)
    {
        *head_ref = temp;
        return;
    }
    while(ptr->next != NULL )
        ptr = ptr->next;
    ptr->next = temp;
    return;
}
void delete_node(struct node **head_ref, int key)
{
    struct node *temp = *head_ref, *prev;
    if(temp!=NULL && temp->data==key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    free(temp);
}
int main()
{
    struct node *head=NULL;
    int choice,insert,dlt;

    do
    {
        printf("\n 1. Enter a Data.");
        printf("\n 2. Delete a Data.");
        printf("\n 3. Print Data.");
        printf("\n 4. Exit.");

        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("\n Adding element : ");
                scanf("%d",&insert);
                insert_eng(&head,insert);
                break;

            case 2:
                printf("\n Deleting element elements : ");
                scanf("%d",&dlt);
                delete_node(&head,dlt);
                break;
            case 3:
                head_count(head);
                break;

            default:
                printf("\n wrong choice....");
                break;
        }
    } 
    while (choice != 4);
}