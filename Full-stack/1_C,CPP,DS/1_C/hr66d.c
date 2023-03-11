#include<stdio.h>
int main()
{
	int i,j;
	char k='A';
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
		if(j%2!=0)	
		{
			printf(" %c\t",k+32);
			j++,k++;
			continue;
		}
			printf(" %c\t",k);
			j++,k++;
		}
		i++;
		printf("\n");
	}
	while(i<=5);
}