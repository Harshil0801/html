#include <stdio.h>
// #include <conio.h>
#include<stdlib.h>
void murgeSort(int a[], int i, int j);
void murge(int a[], int i1, int j1, int i2, int j2);
// void murgeSort(int a[], int i, int j);

void murgeSort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        murgeSort(a, i, mid);
        murgeSort(a, mid + 1, j);
        murge(a, i, mid, mid + 1, j);
    }
}
void murge(int a[], int i1, int j1, int i2, int j2)
{
    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;
  printf("  %d, %d   ",a[i],a[j]);
    //printf(" %d, %d, %d, %d, ", i1, j1, i2, j2);
    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    
    while (i <= j1)
        temp[k++] = a[i++];
    while (j <= j2)
        temp[k++] = a[j++];

    for (i = i1, j = 0; i <= j2; i++, j++)

        a[i] = temp[j];
}
int main()
{
    int i, a[25], n = 15, min = 20, max = 101;
    for (i = 0; i < n; i++)
    {

    
        a[i] = rand() % (max - min + 1) + min;
   

    }
    
    murgeSort(a, 0, n-1);
    printf("\n sorted array is : ");
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
        return 0;
}