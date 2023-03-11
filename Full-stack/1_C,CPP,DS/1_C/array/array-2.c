#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" a[%d] = %d \n",i,a[i]);
	}

	int b[10];
	for(i=0;i<5;i++)
	{
		printf("Enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n b[%d] = %d",i,b[i]);
	}

}