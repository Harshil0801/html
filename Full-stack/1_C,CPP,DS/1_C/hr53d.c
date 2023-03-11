#include<stdio.h>
int main()
{
	int j;
	char c;
	c='A';
 	while(c<='E')
	{
		j=1;
		while(j<=5)
		{
			printf("%c ", c,j++);
		}
		printf("\n",c++);
	}
}