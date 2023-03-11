// Enter the elements in array at different position :

#include<stdio.h>
int main()
{
    int a[10], i, el,it,n,mid,p;
    for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}

    printf("\n If you want to inserth value at last, press 1.");
    printf("\n If you want to inserth value at Front, press 2.");
    printf("\n If you want to inserth value at Middle, press 3.");

    printf("\n Enter Your Choice : ");
    scanf("%d",&n);
    switch (n)
    {    
    case 1:
            printf("\nEnter Element to Insert at last: ");
            scanf("%d", &el);
            a[i] = el;
            printf("\nThe New Array is:\n");
            for(i=0; i<6; i++)
            {
                printf("\n a[%d] %d",i,a[i]);
            }
        break;

    case 2:
            printf("\nEnter Element to Insert at Front: ");
  	        scanf("%d",&it);
            i++;
  	        for(i=6;i>1;i--)
  	        {
  	             a[i-1]=a[i-2];
  	        }
            a[0]=it;
  	        printf("\nUpdated array");
  	        for(i=0;i<6;i++)
  	        {
  	          printf("\na[%d]=%d", i, a[i]);
  	        }
        break;

    case 3:
            printf("\nEnter Position to Insert Element: ");
  	        scanf("%d",&p);    
            printf("\nEnter Element to Insert at Middle: ");
  	        scanf("%d",&mid);
  	        for(i=6;i>p;i--)
  	        {
  	             a[i-1]=a[i-2];
  	        }
            a[p]=mid;
            a[i]++;
  	        printf("\nUpdated array");
  	        for(i=0;i<6;i++)
  	        {
  	          printf("\na[%d]=%d", i, a[i]);
  	        }
        break;

    default:
            printf("\n Your Choice is Wrong..");
        break;
    
    }  
}