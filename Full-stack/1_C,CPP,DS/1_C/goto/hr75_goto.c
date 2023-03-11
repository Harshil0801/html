#include<stdio.h>
int main()
{
	int i=1,j=1;
	row :
		
		if(i<=5)
		{
		printf(" \n");
		i++;
		goto column;
		} 
	

	column :
		
		if(j<i)
		{
		printf(" *",j++);
		goto column;
		}

			if(i<=5)
			{
			j=1;
			goto row;
			}
				if(i%j==0)
				{
				printf(" ");
				goto row;
				} 
//	space : 
		
} 