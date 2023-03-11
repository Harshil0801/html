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
    insert_eng(&head,11);
    insert_eng(&head,12);
    insert_eng(&head,13);
    insert_eng(&head,14);
    insert_eng(&head,15);
    insert_eng(&head,16);
    insert_eng(&head,17);
    head_count(head);
    return 0;
}