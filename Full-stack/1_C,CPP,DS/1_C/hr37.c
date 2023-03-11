#include<stdio.h>
int main()
{
	int i,j;
	char k='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++,k++)
		{
			printf("%c \t", k);
					
		}
		printf("\n");
	}
}