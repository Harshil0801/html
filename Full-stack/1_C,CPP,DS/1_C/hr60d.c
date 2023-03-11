#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			printf(" %d ",i);
			j++;		
		}
		i++;
		printf("\n");
	}
	while(i<=5);
}