#include<stdio.h> 
void split()  
{  
    int a[10], arr1[10], arr2[10], i, n, pos, k1 = 0, k2 = 0;  
    printf("Enter integer numbers : "); 
	scanf("%d",&n); 
    for(i = 0; i < n; i++)  
	{
        printf("a[%d] = ",i);  
		scanf("%d",&a[i]);
	}
    printf("\nEnter position to split the array in to Two : ");  
    scanf("%d", &pos);  
    for(i = 0; i < n; i++)  
    {  
        if(i < pos)
            arr1[k1++] = a[i];  
        else  
            arr2[k2++] = a[i];  
    }  
    printf("\nElements of First Array -> arr1[%d]\n", k1);  
    for(i = 0; i < k1; i++)  
        printf("\n a[%d] = %d",i,arr1[i]);  
    printf("\nElements of Second Array -> arr2[%d]\n", k2);  
    for(i = 0; i < k2; i++)  
        printf("\n a[%d] = %d",i,arr2[i]);  
    printf("\n");    
} 
int main()
{
	split();
}