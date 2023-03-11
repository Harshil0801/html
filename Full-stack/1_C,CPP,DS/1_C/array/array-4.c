#include<stdio.h>
int main()
{
	int a[10],i,b=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
		
		if(a[i]%2!=0)
		{
			b+=a[i];	
		}
	}
	printf("%d",b);
}