#include<stdio.h>
int main()
{
	int j;
	char c;
 	for(c='A';c<='E';c++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ", c);
		}
		printf("\n");
	}
}