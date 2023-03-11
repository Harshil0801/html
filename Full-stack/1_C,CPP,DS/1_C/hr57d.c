#include<stdio.h>
int main()
{
	int i,j;
	char k='A';
	i=1;
	do
	{
		j=1;
		while(j<=5)
		{
			printf("%c \t", k);
			j++,k++;
					
		}
		i++;
		printf("\n");
	}
	while(i<=5);
}