                                    // Merge Array Array-1 + Array-2 :
#include<stdio.h>
#include<conio.h>
void merge()
{
    int a[50], b[50], c[100], size1, size2, i, k;
    printf("Enter a Size of Array 1 : ");
    scanf("%d", &size1);
    printf("Enter %d Elements \n",size1);
    for(i=0; i<size1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k = i;
    printf("Enter a Size of Array 2 : ");
    scanf("%d", &size2);
    printf("Enter %d Elements \n",size2);
    for(i=0; i<size2; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }
    printf("\nThe new array after merging");
    for(i=0; i<k; i++)
        printf("\n%d ", c[i]);
}
int main()
{
    merge();
}