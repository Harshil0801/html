#include<stdio.h>
int main()
{
	int a[3][3],i,j,upper=0,lower=0,diagonal=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
		printf("Enter the a:[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("\t %d",a[i][j]);
		
		printf("\n");
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)	
			upper=upper+a[i][j];

			if(i==j)
			diagonal=diagonal+a[i][j];
			
			if(i>j)
			lower=lower+a[i][j];
		}
	}
	printf("sum of upper tariagle = %d\n",upper);
	printf("sum of diagonal element = %d\n",diagonal);
	printf("sum of lower tariagle = %d\n",lower);
}	
