                                        // recursion :
#include<stdio.h>
int rec(int n)
{
    printf("\n Winding phase : Level %d.",n);
    if(n<7)
        rec(n+1);
    //else
    //    return;
    printf("\n Unvinding phase Level %d.",n);
}
int main()
{
    int m;
    printf("\n Enter the number : ");
    scanf("%d",&m);
    rec(1);
    return 0;
}