                                                // Stack 

#include<stdio.h>
int s[10],top=-1,n,x;
void insert(int x)
{
    if(top>=n-1) // if your array is full means your stack is full you can't insert elements.
    {
        printf("The array is full you can't add.");
    }
    else
    {
        // When you want to elements. 
        top++;  // First add position.
        s[top]=x; // Then after added elements in this position.
    }
}
void out()
{
    if(top==-1) // if your array is empty means your stack is empty you can't Delete elements.
    {
        printf("You can't Delete element, because the stack is empty");
    }
    else
    {
        // When you want to elements.
        s[top]=x;   // First delete element and position was empty.
        top--;  // Then After position is Deleted.
    }
}
void print()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\n %d",s[i]);
    }
}
int main()
{
    int i;
    printf("Enter a number of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter a element.");
        scanf("%d",&x);
        insert(x);
    }
    print();
}