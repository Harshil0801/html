                                        // BUBLE SORT 

#include<stdio.h>
int main()
{
    int a[10],i,j,c,n=10;
    // int a[10]={12,32,55,10,4,45,22,13,90,35}

    printf("\n Enter number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf(" a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
        printf("\t %d",a[i]);
    }
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n-i-1;j++)
    //     {
    //         if(a[j]<a[j+1])
    //         {
    //             c=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=c;
    //         }
    //     }
    //     printf("\t %d",a[j]);
    // }
}