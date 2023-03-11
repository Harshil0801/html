													// Position Find and change the value :



#include<stdio.h>
int main()
/*
{
	int a[10],i,p;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	
    for(i=0;i<5;i++)
	{
        printf("\nPosition of %d is %d",a[i],i);
    }
        
    printf ("\nEnter the number which's position you find : ");
    scanf ("%d",&p); 

    for(i=0;i<5;i++)
    {
        if(a[i]==p)
        {
        printf("Position is %d",i+1);
        return 0;
        }
    }
	printf("\nNot found");
}
*/

{
	int a[10],i,s,t;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	
    for(i=0;i<5;i++)
	{
        printf("\nPosition of %d is %d",a[i],i);
    }
    printf("\nEnter the position to be update:");
  	scanf("%d",&t);
  	printf("\nEnter the value to be update:");
  	scanf("%d",&s);
  	for(i=0;i<5;i++)
  	{
  	  if(i==t)
  	  {
  	     a[i]=s;
  	  }
  	}
  	printf("\nUpdated value is:");
  	for(i=0;i<5;i++)
  	{
  	  printf("\na[%d]=%d",i,a[i]);
  	}
	printf("\nNew : [%d]=%d",t,s);
	return 0;
}