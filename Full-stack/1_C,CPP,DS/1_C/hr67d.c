#include<stdio.h>
int main()
{
	char i,j;
	char k='A';
	i='A';
	do
	{
		j='A';
		while(j<=i)
		{
			printf(" %c\t",k);
			j++,k++;	
		}
		i++;
		printf("\n");
	}
	while(i<='E');
}