#include<stdio.h>
int main()
{
	int i,j,k=1;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			printf(" %d\t",k);		
			j++,k++;
		}
		i++;
		printf("\n");
	}
	while(i<=5);
}