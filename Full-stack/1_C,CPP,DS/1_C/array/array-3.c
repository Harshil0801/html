#include<stdio.h>
int main()
{
	int a[10],b[10],i;

	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf(" Enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n %d) %d + %d = %d \n",i+1,a[i],b[i],a[i] + b[i]);
	}

}