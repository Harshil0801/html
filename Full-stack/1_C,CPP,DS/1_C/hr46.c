#include<stdio.h>
int main()
{
	int i,j;
	char k='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
		if(j%2!=0)	
		{
			printf(" %c\t",k+32);
			continue;
		}
			printf(" %c\t",k);				}
		printf("\n");
	}
}