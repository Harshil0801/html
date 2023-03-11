                                                // Link-List :

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)  //  6.
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
void insert_eng(struct node **head_ref, int new_data)  //  1.
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
void insert_node(struct node **head_ref, int key)  //  4.
{
    struct node *temp = *head_ref, *prev;
    if(temp!=NULL && temp->data==key)
    {
        *head_ref = temp->next;
        return;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
}
void insert_front(struct node **head_ref, int new_data)  //  2.
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
    while(ptr->next != NULL)
        ptr = ptr->next;
    
    temp->next = *head_ref;
    *head_ref = temp;
    return;
}
void front_delete(struct node **head)  //  3.
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        temp = *head;  
        *head = temp->next;  
        free(temp);  
    }  
}
void delete_node(struct node **head_ref, int key)  //  4.
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
void last_delete(struct node **head)  //  5.
{  
    struct node *temp,*tempnode; 
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }     
    else  
    {  
        temp = *head;   
        while(temp->next != NULL)  
        {  
            tempnode = temp;  
            temp = temp ->next;  
        }  
        tempnode->next = NULL;  
        free(temp);   
    }     
}  
int main()
{
    struct node *head=NULL;
    int choice,insert,dlt,insert1;

    do
    {
        printf("\n 1. Enter a Data from last.");
        printf("\n 2. Enter a data from anywere.");
        printf("\n 3. Enter a Data from front.");
        printf("\n 4. Delete a Data from front.");
        printf("\n 5. Delete a data from anywere.");
        printf("\n 6. Delete a Data from last.");
        printf("\n 7. Print Data.");
        printf("\n 8. Exit.");

        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("\n Adding element from last : ");
                scanf("%d",&insert);
                insert_eng(&head,insert);
                head_count(head);
                break;
            case 2:
                printf("\n Enter your adding Element : ");
                scanf("%d",&insert1);
                insert_node(&head,insert1);
                head_count(head);
            case 3:
                printf("\n Adding element from front : ");
                scanf("%d",&insert);
                insert_front(&head,insert);
                head_count(head);
                break;
            case 4:
                front_delete(&head);
                head_count(head);
                break;
            case 5:
                printf("\n Enter your Deleting Element : ");
                scanf("%d",dlt);
                delete_node(&head,dlt);
                head_count(head);
            case 6:
                last_delete(&head);
                head_count(head);
            case 7:
                head_count(head);
                break;
            default:
                printf("\n wrong choice....");
                break;
        }
    } 
    while (choice != 8);
}