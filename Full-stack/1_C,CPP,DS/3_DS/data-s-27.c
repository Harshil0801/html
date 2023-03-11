                                    // Quickshort :
#include<stdio.h>
#include<stdlib.h>
int n,cnt=0;
void print(int a[])
{
    int i;
    printf("\n %d --> ",++cnt);
    for(int i=0; i<n; i++)
        printf(" %d",a[i]);
}
void quickshort(int a[], int first, int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        printf("\n Inside Quick : ");
        print(a);
        pivot = first;
        i = first;
        j = last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quickshort(a,first,j-1);
        quickshort(a,j+1,last);
    }
}
int main()
{
    int i, a[25], min=20, max=101;
    printf("\n How many Elements? : ");
    scanf(" %d",&n);
    printf("\n Enter %d Elements",n);
    for(i=0; i<n; i++)
        a[i] = (rand() % (max-min+1)+min);
    quickshort(a,0,n-1);
    printf("\n order of Sorted Elements : ");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);
    return 0;
}