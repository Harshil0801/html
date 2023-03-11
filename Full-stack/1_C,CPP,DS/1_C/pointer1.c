#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter value a : ");
    scanf("%d", &a);
    printf("\n Enter value b : ");
    scanf("%d", &b);

    int *ptr1, *ptr2, ptr3;
    ptr1=&a;
    ptr2=&b;
    ptr3=*ptr2;
    b=*ptr1;
    a=ptr3;
   

    printf("\n swap of a : %d", a);
    printf("\n swap of b : %d", b);
}
