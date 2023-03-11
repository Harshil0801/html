#include<stdio.h>
int rec(int n)
{
    printf("\n Winding... %d",n);
    if(n<5)
        rec(n+1);
    else
        return 1;
     printf("\n unwinding... %d",n);
}
int main()
{
    rec(1);
}