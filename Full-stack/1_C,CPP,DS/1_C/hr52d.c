#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		do
		{
			printf("%d ", j++);			
		}

		while(j<=5);
		
		printf("\n",i++);
	}

	while(i<=5);
	
}