                                                        // Doubly linked-list :
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void printlist(struct node *node)
{
    struct node *last;
    struct node *front;
    while(node->next != NULL)
    {
        printf(" %d -> ",node->data);
        last = node;
        node = node->next;  
    }
    while(node != NULL)
    {
        printf(" %d -> ",node->data);
        front = node;
        node = node->prev;    
    }
    if(node == NULL)
        printf(" NULL. \n");
}
int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one -> data = 11;
    two -> data = 22;
    three -> data = 33;

    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    one -> prev = NULL;
    two -> prev = one;
    three -> prev = two;
    head = one;
    printlist(head);
}