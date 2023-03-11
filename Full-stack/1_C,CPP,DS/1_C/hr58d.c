#include<stdio.h>
int main()
{
	int i,j,k=11;
	i=1;
	do
	{
		j=1;
		while(j<=5)
		{
			printf("%d \t", k);
			j++,k++;		
		}
		k=k+5;
		i++;
		printf("\n");
	}
	while(i<=5);
}