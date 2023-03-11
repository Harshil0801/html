#include<stdio.h>
int main()
{
	char i,j,k;
	i='A';
	do
	{
		j='A';
		k=i;
		while(j<=i)
		{
			printf(" %c ",k);
			j++,k--;
		}
		i++;
		printf("\n");
	}
	while(i<='E');
}