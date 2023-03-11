#include<stdio.h>
int main()
{
	char i,j,k;
	for(i='A';i<='E';i++)
	{
		k=i;
		for(j='A';j<=i;j++,k--)
		{
			printf(" %c ",k);
		}
		printf("\n");
	}
}