// Enter value at Middle :

#include<stdio.h>
int main()
{
	int a[10],i,mid,p;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}

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
	return 0;
}