#include <stdio.h>
    
int main()
{
    char str1[50],str2[50],str3[50];
    int i=0,j=0;

    printf("\n First string : ");
    gets(str1);
    printf("\n Second string : ");
    gets(str2); 
   
    while (str1[i] != '\0') 
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i=0;
    while (str2[i] != '\0') 
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("\nConcatenated string: %s", str3);
 
}