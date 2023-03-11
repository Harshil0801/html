#include<stdio.h>
int main()
{
	int i,j,k=0;
	i=5;
	do
	{
		j=5;
		while(j>=i)
		{
			if(k==1)
			{
				k=0;
				printf(" %d ",k);
				j--;
			}
			else
			{
				k=1;
				printf(" %d ",k);
				j--;
			}
			// printf(" %d ",k);
		}
		i--;
		printf("\n");
	}
	while(i>=1);
}