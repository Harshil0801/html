                                                // Queue LIFO :

#include<stdio.h>
int f=-1,r=-1,n=5,q[10],val,i,x;
void insert(int x)
{
    if(r>=n-1)
    {
        printf("\n full");
    }
    else
    {
        if(f==-1)nb
            f=0;
        q[++r]=x;
    }
    printf("insert f = %d  r = %d  \n",f,r);
}
void OUT()
{
    if(f==-1 && r==-1)
        printf("\n Queue is Empty");
    else
    {
        if(f==r)
            f=r=-1;        
        val=q[f++];
    }
    printf("\ndelete f = %d  r = %d  ",f,r);
    printf("\n Deleted value is : %d",val);
}
void print()
{
    for(i=f;i<=r;i++)
    {
        printf("\n q[%d] : %d",i,q[i]);
    }
}
int main()
{
    int ch,element;
    do
    {
        printf("\n 1. Insert an Element.");
        printf("\n 2. Delete an Element.");
        printf("\n 3. Display Queue.");
        printf("\n 4. Exit.\n");

        printf("\n\n Enter your choice : ");
        scanf("%d",&ch); 
        switch(ch)
        {
            case 1:
                printf("\n Enter element for insert : ");
                scanf("%d",&element);
                insert(element);
                break;
            case 2:
                OUT();
                break;
            case 3:
                print();
                break;
        }
    } 
    while (ch!=4);
}