#include<stdio.h>
int main()
{
	int i,j,k=0;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			if(k==1)
			{
				k=0;
				printf(" %d ",k);
			}
			else
			{
				k=1;
				printf(" %d ",k);
			}
			// printf(" %d ",k);
		}
		printf("\n");
	}
}