                                            // All Sorting Algorithm :
//  1. Bubble Sort
//  2. Selection Sort 
//  3. Insertion Sort
//  4. Linear Search
//  5. Binary Search

#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("\na[%d] = %d ",i,arr[i]);
}
void bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    printf("After Bubble sort Elements are : ");
    //display(arr,n);
}
void selection_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
    printf("After Selection sort Elements are : ");
    //display(arr,n);
}
void insertion_sort(int arr[],int n)
{
    int i,j,min;
    for(i=1;i<n;i++)
    {
        min=arr[i];
        j=i-1;
        while(min<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=min;
    }
    printf("After Insertion sort Elements are : ");
    //display(arr,n);
} 
void linear_search(int search_key,int arr[100],int n)
{
    int i,location;
    for(i=1;i<=n;i++)
    {
        if(search_key == arr[i])
        {
            location = i;
            printf("______________________________________\n");
            printf("The location of %d is %d\n",search_key,location);
            printf("______________________________________\n");
        }
    }
}
void binary_search(int search_key,int array[100],int n)
{
    int mid,i,low,high;
    low = 1;
    high = n;
    mid = (low + high)/2;
    i=1;
    while(search_key != array[mid])
    {
        if(search_key <= array[mid])
        {
            low = 1;
            high = mid+1;
            mid = (low+high)/2;
        }
        else
        {
            low = mid+1;
            high = n;
            mid = (low+high)/2;
        }
    }
    printf("__________________________________\n");
    printf("The location of %d is %d\n",search_key,mid);
    printf("__________________________________\n");
}
int main()
{
   int n,choice,i,search_key;
   char ch[20];
   printf("Enter a size of Array : ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
        printf("Enter Element Number %d : ",i+1);
        scanf("%d",&arr[i]);
   }
    while(1)
   {
        display(arr,n);
        printf("\n");
        printf("\n1. Bubble Sort \n2. Selection Sort \n3. Insertion Sort \n4. Linear Search. \n5. Binary Search.\n");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                bubble_sort(arr,n);
                break;

            case 2:
                selection_sort(arr,n);
                break;

            case 3:
                insertion_sort(arr,n);
                break;

            case 4:
                printf("ENTER THE SEARCH KEY:");
                scanf("%d",&search_key);
                linear_search(search_key,arr,n);
                break;
            
            case 5:
                printf("ENTER THE SEARCH KEY:");
                scanf("%d",&search_key);
                binary_search(search_key,arr,n);
                break;

            case 6:
                return 0;

            default:
                printf("\n Wrong Choice...");
        }
    }
return 0;
}