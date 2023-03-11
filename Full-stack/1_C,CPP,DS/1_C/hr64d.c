#include<stdio.h>
int main()
{
	char i,j;
	i='A';
	do
	{
		j='A';
		while(j<=i)
		{
			printf(" %c\t",j);
			j++;	
		}
		i++;
		printf("\n");
	}
	while(i<='E');
}