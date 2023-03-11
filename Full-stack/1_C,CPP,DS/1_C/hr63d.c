#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	do
	{
		j=5;
		while(j>=i)
		{
			printf(" %d\t",j);
			j--;
		}
		i--;
		printf("\n");
	}
	while(i>=1);
}