#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		while(j<=5)
		{
			printf("%d \t", i);
			j+=2;
		}
		i++;
		printf("\n");
	}
	while(i<=5);
}