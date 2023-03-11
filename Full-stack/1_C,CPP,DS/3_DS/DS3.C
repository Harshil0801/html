// Enter value at front :

#include<stdio.h>
int main()
{
	int a[10],i,it;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}

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
	return 0;
}