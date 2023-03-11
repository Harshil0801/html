// Enter value at last :

#include<stdio.h>
int main()
{
    int a[10], i, el;
    for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
    printf("\nEnter Element to Insert: ");
    scanf("%d", &el);

    a[i] = el;
    printf("\nThe New Array is:\n");

    for(i=0; i<6; i++)
    {
        printf("\n a[%d] %d",i,a[i]);
    }
    return 0;
}