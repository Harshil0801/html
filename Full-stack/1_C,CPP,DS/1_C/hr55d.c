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
			printf("%d ", i);
			j++;
		}
		i+=2;
		printf("\n");
	}
	while(i<=10);
}