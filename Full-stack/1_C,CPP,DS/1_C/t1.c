#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(j<i)
			{
				printf("   ");
			continue;
			}	
			printf("  %d   %d ",i,j);
			
		}
		printf("\n");
	}
}

