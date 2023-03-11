#include<stdio.h>
int main()
{
	char i,j;
	char k='A';
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++,k++)
		{
			printf(" %c\t",k);			}
		printf("\n");
	}
}