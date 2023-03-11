                                                // Queue From both side :

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int q[10],R=-1,F=-1,te=0,ch,n,i,x;
    for(;;)		
    { 
        printf("F=%d  R=%d\n\n",F,R);
        printf("1. Add Rear\n");
        printf("2. Delete Rear\n");
        printf("3. Add Front\n");
        printf("4. Delete Front\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(te==size)
                {
                    printf("Queue is full");
                    getch();
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R=(R+1)%size;
                    q[R]=n;
                    te=te+1;
                }
                break;
            case 2:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();
                }
                else
                {
                    if(R==-1)
                    {
                        R=size-1;
                    }
                    printf("Number Deleted From Rear End = %d",q[R]);
                    R=R-1;
                    te=te-1;
                    getch();
                }
                break;
            case 3:
                if(te==size)
                {
                    printf("Queue is full");
                    getch();
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    if(F==0)
                    {
                        F=size-1;
                    }
                    else
                    {
                        F=F-1;
                    }
                    q[F]=n;
                    te=te+1;
                }
                break;
            case 4:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();
                }
                else
                {
                    printf("Number Deleted From Front End = %d",q[F]);
                    F=(F+1)%size;
                    te=te-1;
                    getch();
                }
                break;
            case 5:
                if(te==0)
                {
                    printf("Queue is empty");
                    getch();
                }
                else
                {
                    x=F;
                    for(i=1; i<=te; i++)
                    {
                        printf("%d ",q[x]);
                        x=(x+1)%size;
                    }
                    getch();
                }
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Wrong Choice");
                getch();
        }
    }
    return 0;
}