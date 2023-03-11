// Enter the element you want to Delete from Anywere :

#include<stdio.h>
int main()
{
    int a[10],el, i, x=-1;
    for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
    
    printf("Enter element to delete : ");
    scanf("%d",&el);

    for(i = 0; i<5; i++)
    {
        if(a[i]==el)
        {
            x=i;
            break;
        }
    }
    if(x!=-1)
    {
    for(i = x; i<5; i++)
        a[i]=a[i+1];

    printf("\nThe New Array is:\n");

    for(i=0; i<4; i++)
        printf("\n a[%d] %d",i,a[i]);
    }
}