                            // febonaci with recursion :
#include<stdio.h>
int fab(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fab(n-1)+fab(n-2);
}
int main()
{
    int n,i;
    printf("\n Enter a Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\t %d",fab(i));
    }
}