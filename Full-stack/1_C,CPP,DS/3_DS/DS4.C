// Find a largest value from three elements.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,z;

    printf("\n Enter A :");
    scanf("%d",&a);
    printf("\n Enter B :");
    scanf("%d",&b);
    printf("\n Enter C :");
    scanf("%d",&c);

   z = (a>b && a>c)? a : (b>c)? b : c;

    printf("\n Largest Value : %d",z);




}
