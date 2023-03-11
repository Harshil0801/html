#include<stdio.h>
int main()
{
	char str[10],i;
	int j;
	printf("\n Enter string : ");
	gets(str);
	printf(" string : %s = ",str);
	for(j=1;str[j]!='\0';j++);
	printf("\n %d",j);
}