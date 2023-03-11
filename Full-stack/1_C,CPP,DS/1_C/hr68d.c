#include<stdio.h>
int main()
{
	int i,j,k;
	i=5;
	do
	{
		j=5;
		k=i;
		while(j>=i)
		{
			printf(" %d ",k);
			j--,k++;
		}
		i--;
		printf("\n");
	}
	while(i>=1);
}